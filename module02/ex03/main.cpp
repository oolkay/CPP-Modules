#include "Point.hpp"

int main( void ) {
	Point	a( 1.4f, 1 );
	Point	b( 1.6f, 3.6f );
	Point	c( 4.5f, 1.3f );
	Point	p1( 15, 30 );
	Point	p2( 2.2f, 3 );
	Point	p3( 4.1f, 1.1f );
	Point	p4( 1.4f, 1 );
	Point	p5( 1.6f, 2 );
	Point	p6( 4.5f, 1.7f );

	Point d(5,0);
	Point e(15,0);
	Point f(10,10);
	Point g(9,8);
	if (bsp(a, b, c, p1))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (a, b,c , p2))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (a, b, c, p3))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (a, b, c, p4))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (a, b, c, p5))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (a, b, c, p6))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	if (bsp (d, e, f, g))
		std::cout << GREEN << "inside" << DEFAULT <<std::endl;
	else
		std::cout << RED << "not inside" << DEFAULT << std::endl;
	return 0;
}