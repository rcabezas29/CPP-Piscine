/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:49:17 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/08 18:57:35 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class	Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(const Point &copy);
		virtual	~Point(void);
		Point &operator=(const Point &op);

		bool	bsp(Point const a, Point const b, Point const c,
						Point const point);
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
