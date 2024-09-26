#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

struct Session {
	std::shared_ptr<asio::ip::tcp::socket> sock;
	std::string buf;
};

void callback(const boost::system::error_code& ec,
							std::size_t bytes_transferred,
							std::shared_ptr<Session> s) {
	if (ec.value() != 0) {
		std::cout << "Error occurred! Error code = " << ec.value() << ". Message: " << ec.message();
		return;
	}
}

void writeToSocket(std::shared_ptr<asio::ip::tcp::socket> sock) {
	std::shared_ptr<Session> s(new Session);

	s->buf = std::string("Hello");
	s->sock = sock;

	asio::async_write(
			*sock,
			asio::buffer(s->buf),
			std::bind(callback,
								std::placeholders::_1,
								std::placeholders::_2,
								s));
}

int main() {
	std::cout << "ch2-07-WritingToTCPSockAsyncEnhanced" << std::endl;

	std::string raw_ip_address = "127.0.0.1";
	unsigned short port_num = 3333;

	try {
		asio::ip::tcp::endpoint ep(asio::ip::address::from_string(raw_ip_address), port_num);

		asio::io_service ios;

		std::shared_ptr<asio::ip::tcp::socket> sock(new asio::ip::tcp::socket(ios, ep.protocol()));

		sock->connect(ep);

		writeToSocket(sock);

		ios.run();
	} catch (system::system_error &e) {
		std::cout << "Error occurred! Error code = " << e.code()
							<< ". Message: " << e.what();

		return e.code().value();
	}

	return 0;
}
