#include <boost/predef.h>

#ifdef BOOST_OS_WINDOWS
#define _WIN32_WINNT 0x501

#if _WIN32_WINNT <= 0x502
#define BOOST_ASIO_DISABLE_IOCP
#define BOOST_ASIO_ENABLE_CANCELIO
#endif
#endif

#include <boost/asio.hpp>
#include <iostream>
#include <thread>

using namespace boost;

int main() {
	std::cout << "ch2-10-CancellingAsyncOperations" << std::endl;

	std::string raw_ip_address = "127.0.0.1";
	unsigned short port_num = 3333;

	try {

		asio::ip::tcp::endpoint ep(asio::ip::address::from_string(raw_ip_address), port_num);

		asio::io_service ios;

		std::shared_ptr<asio::ip::tcp::socket> sock(new asio::ip::tcp::socket(ios, ep.protocol()));

		sock->async_connect(ep,
			[sock](const boost::system::error_code &ec) {
				if (ec.value() != 0) {
					if (ec.value() == asio::error::operation_aborted) {
						std::cout << "Operation cancelled!";
					} else {
						std::cout << "1Error occurred! Error code = " << ec.value() << ". Message: " << ec.message();
					}

					return;
				}
		});

		std::thread worker_thread([&ios]() {
			try {
				ios.run();
			} catch (system::system_error & e) {
				std::cout << "2Error occurred! Error code = " << e.code() << ". Message: " << e.what();
			}
		});

		std::this_thread::sleep_for(std::chrono::seconds (2));

		sock->cancel();

		worker_thread.join();

	} catch (boost::system::system_error &e) {
		std::cout << "3Error occurred! Error code = " << e.code() << ". Message: " << e.what();

		return e.code().value();
	}

	return 0;
}
