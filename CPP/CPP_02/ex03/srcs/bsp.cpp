/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:11:40 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 15:11:36 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// return positive if point is on the right side of the line
// return negative if point is on the left side of the line
// return 0 if point is on the line
static Fixed sign(Point const p1, Point const p2, Point const p3) 
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

static bool isPointOnEdge(Point const p1, Point const p2, Point const point) 
{
    Fixed crossProduct = (point.getY() - p1.getY()) * (p2.getX() - p1.getX()) - (point.getX() - p1.getX()) * (p2.getY() - p1.getY()); //crossProduct is the z component of the cross product of two vectors, cross product is 0 if vectors are parallel, cross product is positive if vectors are in the counter clockwise direction, negative if vectors are in the clockwise direction
    if (crossProduct != Fixed(0)) // if cross product is  0 when point is on the line, 
        return false;
    Fixed dotProduct = (point.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (point.getY() - p1.getY()) * (p2.getY() - p1.getY()); // dot product shows relative position of point to the vector, before or after the vector, it is scalar of two vectors, scalar is projection of one vector to another, scalar is positive if vectors are in the same direction, negative if vectors are in the opposite direction, 0 if vectors are perpendicular
    if (dotProduct < Fixed(0))
        return false;
    Fixed squaredLengthBA = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (p2.getY() - p1.getY()) * (p2.getY() - p1.getY()); // squared length of the vector, squared length is the dot product of the vector with itself, it shows the length of the vector
    if (dotProduct > squaredLengthBA) // if they are parallel and dot product is greater than squared length of the vector, point is after the vector, projectjon of the point to the vector1 is further than the length of the vector2
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
