#ifndef FIXED_HPP
# define FIXED_HPP

//Classes must be designed in the Orthodox Canonical Form (OCF)
//Default constructor
//Copy constructor
//Assignation operator overload
//Destructor

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed &operator=(const Fixed rhs);
        ~Fixed();
        //getRawBits'e const bir obje mi erişebilir ?
        int getRawBits( void ) const;
        void setRawBits( int const raw);
};

# endif