#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::_fractionalBits = 8;

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

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
    (void)raw;
    std::cout << "getRawBits member function called" << std::endl;
}