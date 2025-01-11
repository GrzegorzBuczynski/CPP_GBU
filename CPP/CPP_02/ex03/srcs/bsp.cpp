
# include "Point.hpp"


static Fixed sign(Point const p1, Point const p2, Point const p3) 
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

static bool isPointOnEdge(Point const p1, Point const p2, Point const point) 
{
    Fixed crossProduct = (point.getY() - p1.getY()) * (p2.getX() - p1.getX()) - (point.getX() - p1.getX()) * (p2.getY() - p1.getY());
    if (crossProduct != Fixed(0)) 
        return false;
    Fixed dotProduct = (point.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (point.getY() - p1.getY()) * (p2.getY() - p1.getY());
    if (dotProduct < Fixed(0)) 
        return false;
    Fixed squaredLengthBA = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
    if (dotProduct > squaredLengthBA) 
        return false;
    return true;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    if (isPointOnEdge(a, b, point) || isPointOnEdge(b, c, point) || isPointOnEdge(c, a, point)) 
        return false;

    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
