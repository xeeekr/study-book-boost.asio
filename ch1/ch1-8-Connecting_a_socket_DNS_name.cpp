#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch1-8-Connecting_a_socket_DNS_name" << std::endl;

	std::string host = "samplehost.book";
	std::string port_num = "3333";

	asio::io_service ios;

	asio::ip::tcp::resolver::query resolver_query(host, port_num, asio::ip::tcp::resolver::query::numeric_service);

	asio::ip::tcp::resolver resolver(ios);

	try {
		asio::ip::tcp::resolver::iterator it = resolver.resolve(resolver_query);

		asio::ip::tcp::socket sock(ios);

		asio::connect(sock, it);
	} catch (system::system_error &e) {
		std::cout
				<< "Error occurred! Error code = "
				<< e.code() << ". Message: " << e.what();
		return e.code().value();
	}

	return 0;
}
