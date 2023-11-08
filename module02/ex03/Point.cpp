#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{}

Point::Point(Point const &src) : _x(src._x), _y(src._y) {}

Point::~Point()
{
    //std::cout << "Destructor Called" << std::endl;
}

Point &Point::operator=(const Point& rhs)
{
    if ( this != &rhs ) {
        // const_cast< Fixed& >(this->_x) = rhs.getX();
        // const_cast< Fixed& >(this->_y) = rhs.getY();
        // ( Fixed ) this->_x = rhs.getX();
        // ( Fixed ) this->_y = rhs.getY();
    }
    return *this;
}

Fixed Point::getX(void) const
{
    return (this->_x);
}

Fixed Point::getY(void) const
{
    return (this->_y);
}

bool Point::operator==(const Point& rhs) const
{
    if (this->_x == rhs._x && this->_y == rhs._y)
        return (true);
    return (false);
}

std::ostream &operator<<(std::ostream &o, Point const &rhs)
{
    o << "Point(" << rhs.getX() << ", " << rhs.getY() << ")";
    return (o);
}


