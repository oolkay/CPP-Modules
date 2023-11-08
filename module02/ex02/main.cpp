#include "Fixed.hpp"
#include <string>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << YELLOW <<std::string(15, '-') << "RAW VALUES" <<
				std::string(15,'-') << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;

	std::cout << "max of a and b " << Fixed::max(a, b) << std::endl;
	std::cout << "min of a and b " << Fixed::min(a, b) << std::endl;

	std::cout << BLUE << std::string(15, '-') << "COMPARISON" <<
				std::string(15,'-') << std::endl;
	std::cout << "b<a " << (b<a) << std::endl;
	std::cout << "b>a " << (b>a) << std::endl;
	std::cout << "b>=a " << (b>=a) << std::endl;
	std::cout << "b<=a " << (b<=a) << std::endl;
	std::cout << "a==a " << (a<=a) << std::endl;
	std::cout << "a==a " << (a==a) << std::endl;
	std::cout << "a==a " << (a>=a) << std::endl;
	std::cout << "a!=b " << (a!=b) << std::endl;
	std::cout << GREEN << std::string(15, '-') << "ARITHMETIC" <<
				std::string(15,'-') << std::endl;
	std::cout << "b+b " << b+b << std::endl;
	std::cout << "b*2 " << b*2 << std::endl;
	std::cout << "b/2 " << b/2 << std::endl;
	std::cout << "b-b " << b-b << std::endl;
	std::cout << MAGENTA << std::string(15, '-') << "INCREMENT/DECREMENT" <<
				std::string(15,'-') << std::endl;
	std::cout << "a++ " << a++ << " a " << a << std::endl;
	std::cout << "a-- " << a-- << " a " << a << std::endl;
	std::cout << "++a " << ++a << " a " << a << std::endl;
	std::cout << "--a " << --a << " a " << a << DEFAULT << std::endl;
	return 0;
}