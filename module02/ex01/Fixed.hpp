#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
//Classes must be designed in the Orthodox Canonical Form (OCF)
//Default constructor
//Copy constructor
//Assignation operator overload
//Destructor

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed &operator=(const Fixed rhs);
        ~Fixed();
        Fixed(const int nbr);
        Fixed(const float fnbr);
        //getRawBits'e const bir obje mi erişebilir ?
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        float toFloat( void ) const;
        int toInt (void ) const;
};


std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

# endif