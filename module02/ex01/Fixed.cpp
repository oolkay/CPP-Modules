#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = src._fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs._fixedPointValue;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = nbr << this->_fractionalBits;
    std::cout << "[DEBUG]" << _fixedPointValue << std::endl;
}

Fixed::Fixed(const float fnbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(fnbr * (1 << this->_fractionalBits));
    std::cout << "[DEBUG]" << _fixedPointValue << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "getRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}