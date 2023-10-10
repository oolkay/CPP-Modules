#include "Fixed.hpp"
#include <iostream>

int main()
{
    Fixed		a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );


	std::cout << "a is " << a << std::endl; // 1234.43
	std::cout << "b is " << b << std::endl; // 10
	std::cout << "c is " << c << std::endl; // 42.42
	std::cout << "d is " << d << std::endl; // 10

	std::cout << "a is " << a.toInt() << " as integer" << std::endl; // 1234
	std::cout << "b is " << b.toInt() << " as integer" << std::endl; // 10
	std::cout << "c is " << c.toInt() << " as integer" << std::endl; // 42
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; // 10

	return 0;
}