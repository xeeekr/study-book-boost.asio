#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {
	std::cout << "ch2-03-ExtensibleStreamOrientedBuffer" << std::endl;

	asio::streambuf buf;

	std::ostream output(&buf);

	output << "Message1\nMessage2";

	std::istream input(&buf);

	std::string message1;

	std::getline(input, message1);

	return 0;
}
