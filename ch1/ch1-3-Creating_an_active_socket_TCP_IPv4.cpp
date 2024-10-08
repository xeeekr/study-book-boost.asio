#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch1-3-Creating_an_active_socket_TCP_IPv4" << std::endl;

	asio::io_service ios;

	asio::ip::tcp protocol = asio::ip::tcp::v4();

	asio::ip::tcp::socket sock(ios);

	boost::system::error_code ec;

	sock.open(protocol, ec);

	if (ec.value() != 0) {
		std::cout
			<< "Failed to open the socket! Error code = "
			<< ec.value() << ". Message: " << ec.message();
		return ec.value();
	}

	return 0;
}
