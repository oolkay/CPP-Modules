#include "Point.hpp"

Fixed findArea(Point const a, Point const b, Point const c)
{
    Fixed area;
    Fixed x1 = a.getX();
    Fixed y1 = a.getY();
    Fixed x2 = b.getX();
    Fixed y2 = b.getY();
    Fixed x3 = c.getX();
    Fixed y3 = c.getY();
    area = (x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1);
    if (area < 0)
        return (area * -1);
    return (area);
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


    if (((yA-yP) / (xA-xP)) == ((yB-yP) / (xB-xP)))
        return (false);
    if (((yA-yP) / (xA-xP)) == ((yC-yP) / (xC-xP)))
        return (false);
    if (((yC-yP) / (xC-xP)) == ((yB-yP) / (xB-xP)))
        return (false);
    return (true);
}

bool bsp(Point &a, Point &b, Point &c, Point &p)
{
    Fixed abc;
    Fixed apb;
    Fixed apc;
    Fixed bcp;

    if (p == a || p == b || p == c)
        return (false);
    if (isEdge(a, b, c, p) == 0)
        return (false);
    abc = findArea(a, b, c);
    apb = findArea(a, p, b);
    apc = findArea(a, p, c);
    bcp = findArea(b, c, p);
    if (abc == (apb + apc + bcp))
        return (true);
    return (false);
}
