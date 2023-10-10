#include "Point.hpp"

int main( void ) {
	Point	a( 10, 20 );
	Point	b( 20,  40 );
	Point	c( 30,  20 );
	Point	p( 15,  30 );
	if (bsp (a, b, c, p))
		std::cout << "inside";
	else
		std::cout << "not inside";
	return 0;
}