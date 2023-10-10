#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
}

Point::Point(Point const &src): x(src.x), y(src.y)
{
}

Point::~Point()
{
    //std::cout << "Destructor Called" << std::endl;
}

Point &Point::operator=(const Point& rhs)
{
    if (this == &rhs)
        return (*this);
    (Fixed)this->x = rhs.x;
    (Fixed)this->y = rhs.y;
    return (*this);
}

Fixed Point::getX(void) const
{
    return (this->x);
}

Fixed Point::getY(void) const
{
    return (this->y);
}

bool Point::operator==(const Point& rhs) const
{
    if (this->x == rhs.x && this->y == rhs.y)
        return (true);
    return (false);
}


