#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch2-01-FixedLengthBufferOutput" << std::endl;

	std::string buf = "Hello";
	buf = "Hello";


	asio::const_buffers_1 output_buf = asio::buffer(std::string_view(buf));
	//asio::const_buffers_1 output_buf = asio::buffer((const std::string)buf);

	return 0;
}
