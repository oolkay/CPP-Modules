#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
//Classes must be designed in the Orthodox Canonical Form (OCF)
//Default constructor
//Copy constructor
//Assignation operator overload
//Destructor

#define DEFAULT "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

class Fixed
{
    public:
        Fixed();                            // Default constructor
        Fixed(const Fixed &src);            // Copy constructor
        Fixed &operator=(const Fixed& rhs); // Assignation operator overload
        ~Fixed();                           // Destructor
        Fixed(const int nbr);               // Constructor from int
        Fixed(const float fnbr);            // Constructor from float
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        float toFloat( void ) const;
        int toInt (void ) const;
    private:
        int _integerBits;
        static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

# endif