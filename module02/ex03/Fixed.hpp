#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
//Classes must be designed in the Orthodox Canonical Form (OCF)
//Default constructor
//Copy constructor
//Assignation operator overload
//Destructor

//prototip sonundaki const ifadesi, classı read only yapıyor

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int nbr);
        Fixed(const float fnbr);
        ~Fixed();
        Fixed &operator=(const Fixed rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        float toFloat( void ) const;
        int toInt (void ) const;
        bool operator > (const Fixed &rhs) const;
        bool operator < (const Fixed &rhs) const;
        bool operator >= (const Fixed &rhs) const;
        bool operator <= (const Fixed &rhs) const;
        bool operator == (const Fixed &rhs) const;
        bool operator != (const Fixed &rhs) const;
        Fixed operator + (const Fixed &rhs) const;
        Fixed operator - (const Fixed &rhs) const;
        Fixed operator * (const Fixed &rhs) const;
        Fixed operator / (const Fixed &rhs) const;
        Fixed &operator ++ (void); //post inc
        Fixed operator ++ (int); //pre inc
        Fixed &operator -- (void); //post dec
        Fixed operator -- (int); //pre dec
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

# endif