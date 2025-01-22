/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:08:26 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:08:27 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float xValue, const float yValue)  : x(xValue), y(yValue) {}
Point::Point(const Point &other) : x(other.x), y(other.y) {}
Point::~Point() {}

Point &Point::operator=(const Point &other)
{
    if (this != &other) 
    {
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
