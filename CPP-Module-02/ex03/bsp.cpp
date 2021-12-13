/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:36:33 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 21:26:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	dotProduct(Point a, Point b)
{
	return a.getX() * b.getX() + a.getY() * b.getY();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	AC(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
	Point	BA(a.getX().toFloat() - b.getX().toFloat(), a.getY().toFloat() - b.getY().toFloat());
	Point	CB(b.getX().toFloat() - c.getX().toFloat(), b.getY().toFloat() - c.getY().toFloat());

	Point PointC(point.getX().toFloat() - c.getX().toFloat(), point.getY().toFloat() - c.getY().toFloat());
	Point PointB(point.getX().toFloat() - b.getX().toFloat(), point.getY().toFloat() - b.getY().toFloat());
	Point PointA(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());

	if (dotProduct(AC, PointA) > 0 && dotProduct(BA, PointB) > 0 && dotProduct(CB, PointC) > 0)
		return true;
	else
		return false;
}
