#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        //Constructors
        Point();
        Point(const Fixed, const Fixed);
        Point(Point const &src);

        //Destructor
        ~Point();

        //Assignation operator overload
        Point &operator=(const Point& rhs);
        bool operator==(const Point& rhs) const;

        //getters
        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool bsp(Point &a, Point &b, Point &c, Point &p);



#endif