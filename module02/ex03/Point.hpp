#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(Point const &src);
        ~Point();
        Point &operator=(const Point& rhs);
        bool operator==(const Point& rhs) const;
        Fixed getX(void) const;
        Fixed getY(void) const;
    private:
        Fixed const _x;
        Fixed const _y;
};

std::ostream &operator<<(std::ostream &o, Point const &rhs);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif