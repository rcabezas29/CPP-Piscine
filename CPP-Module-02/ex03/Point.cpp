/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:49:17 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/08 18:55:40 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const Fixed x, const Fixed y)
{
	std::cout << "Default constructor called" << std::endl;
	this->_x = x;
	this->_y = y;
}

Point::Point()
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &copy)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator=(const Point &op)
{
	std::cout << "Assignation operator called" << std::endl;
}
