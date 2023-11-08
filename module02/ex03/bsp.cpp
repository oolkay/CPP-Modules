#include "Point.hpp"

Fixed findArea(Point const a, Point const b, Point const c)
{
	Fixed 	area((((a.getX()*b.getY()) + (b.getX()*c.getY()) + (c.getX()*a.getY())) -
			((b.getX()*a.getY()) + (c.getX()*b.getY()) + (a.getX()*c.getY()))) / 2);
	if (area < 0)
		return (area * -1);
	return area;
}

bool  isEdge(Point const a, Point const b, Point const c, Point const p)
{
    Fixed xA;
    Fixed yA;
    Fixed xB;
    Fixed yB;
    Fixed xC;
    Fixed yC;
    Fixed xP;
    Fixed yP;

    xA = a.getX();
    yA = a.getY();
    xB = b.getX();
    yB = b.getY();
    xC = c.getX();
    yC = c.getY();
    xP = p.getX();
    yP = p.getY();

    if (xA != xP && xB != xP && (((yA-yP) / (xA-xP)) == ((yB-yP) / (xB-xP))))
        return (true);
    if (xA != xP && xC != xP && ((yA-yP) / (xA-xP)) == ((yC-yP) / (xC-xP)))
        return (true);
    if (xC != xP && xB != xP && ((yC-yP) / (xC-xP)) == ((yB-yP) / (xB-xP)))
        return (true);
    return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc;
    Fixed apb;
    Fixed apc;
    Fixed bcp;

    if (point == a || point == b || point == c)
    {
        std::cout << RED << "Point is on the vertex "<< DEFAULT;
        return (false);
    }
    if (isEdge(a, b, c, point))
    {
        std::cout << RED << "Point is on the edge " << DEFAULT;
        return (false);
    }
    abc = findArea(a, b, c);
    apb = findArea(a, point, b);
    apc = findArea(a, point, c);
    bcp = findArea(b, c, point);
    if (abc == (apb + apc + bcp))
        return (true);
    return (false);
}
