#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch1-2-Creating_endpoint_Server" << std::endl;

	unsigned short port_num = 3333;

	asio::ip::address ip_address = asio::ip::address_v6::any();

	asio::ip::tcp::endpoint ep(ip_address, port_num);

	return 0;
}
