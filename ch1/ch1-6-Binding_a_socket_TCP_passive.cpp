#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch1-6-Binding_a_socket_TCP_passive" << std::endl;

	unsigned short port_num = 3333;

	asio::ip::tcp::endpoint ep(asio::ip::address_v4::any(), port_num);

	asio::io_service ios;

	asio::ip::tcp::acceptor acceptor(ios, ep.protocol());

	boost::system::error_code ec;

	acceptor.bind(ep, ec);

	if (ec.value() != 0) {
		std::cout
				<< "Failed to bind the acceptor socket."
				<< "Error code = " << ec.value() << ". Message: " << ec.message();
		return ec.value();
	}

	return 0;
}
