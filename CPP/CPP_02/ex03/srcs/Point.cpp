#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float xValue, const float yValue)  : x(xValue), y(yValue) {}
Point::Point(const Point &other) : x(other.x), y(other.y) {}
Point::~Point() {}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        const_cast<Fixed &>(this->x) = other.x;
        const_cast<Fixed &>(this->y) = other.y;
    }
    return *this;
}

Fixed Point::getX() const
{
    return this->x;
}

Fixed Point::getY() const
{
    return this->y;
}
