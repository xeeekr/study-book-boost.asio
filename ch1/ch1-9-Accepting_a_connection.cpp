#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch1-9-Accepting_a_connection" << std::endl;

	const int BACKLOG_SIZE = 30;

	unsigned short port_num = 3333;

	asio::ip::tcp::endpoint ep(asio::ip::address_v4::any(), port_num);

	asio::io_service ios;

	try {
		asio::ip::tcp::acceptor acceptor(ios, ep.protocol());

		acceptor.bind(ep);

		acceptor.listen(BACKLOG_SIZE);

		asio::ip::tcp::socket sock(ios);

		acceptor.accept(sock);
	} catch (system::system_error &e) {
		std::cout
				<< "Error occurred! Error code = "
				<< e.code() << ". Message: " << e.what();
		return e.code().value();
	}

	return 0;
}
