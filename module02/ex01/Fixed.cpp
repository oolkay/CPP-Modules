#include "Fixed.hpp"

Fixed::Fixed(): _integerBits(0)
{
    std::cout << CYAN << "Default constructor called" << DEFAULT << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << BLUE <<"Copy constructor called" << DEFAULT << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << MAGENTA << "Copy assignment operator called" << DEFAULT << std::endl;
    if (this != &rhs)
        this->_integerBits = rhs.getRawBits();
    return *this;
}
Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << DEFAULT << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << GREEN << "getRawBits member function called" << DEFAULT << std::endl;
    return (this->_integerBits);
}

void Fixed::setRawBits( int const raw )
{
    _integerBits = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_integerBits = nbr << this->_fractionalBits;
}

Fixed::Fixed(const float fnbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_integerBits = roundf(fnbr * (1 << this->_fractionalBits));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_integerBits / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->_integerBits >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}