#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

void writeToSocket(asio::ip::tcp::socket& sock) {
	std::string buf = "Hello";

	std::size_t total_bytes_written = 0;

	while (total_bytes_written != buf.length()) {
		total_bytes_written += sock.write_some(
				asio::buffer(buf.c_str() + total_bytes_written, buf.length() - total_bytes_written));
	}
}

void writeToSocketEnhanced(asio::ip::tcp::socket &sock) {
	std::string buf = "Hello";

	asio::write(sock, asio::buffer(buf));
}

int main() {
	std::cout << "ch2-04-WritingToTCPSockSync" << std::endl;

	std::string raw_ip_address = "127.0.0.1";
	unsigned short port_num = 3333;

	try {
		asio::ip::tcp::endpoint ep(asio::ip::address::from_string(raw_ip_address), port_num);

		asio::io_service ios;

		asio::ip::tcp::socket sock(ios, ep.protocol());

		sock.connect(ep);

		writeToSocket(sock);

		writeToSocketEnhanced(sock);
	} catch (system::system_error &e) {
		std::cout << "Error occurred! Error code = " << e.code() << ". Message: " << e.what();

		return e.code().value();
	}

	return 0;
}
