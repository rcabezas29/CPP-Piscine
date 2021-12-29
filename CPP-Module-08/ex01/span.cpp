/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:10:08 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/29 12:07:48 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _size(n), _assignedValues(0)
{
	std::cout << "Span constructor called" << std::endl;
	this->_values = new int[n];
}

Span::Span(const Span &copy)
{
	std::cout << "Span copy constructor called" << std::endl;
	this->_size = copy._size;
	this->_values = copy._values;
	this->_assignedValues = copy._assignedValues;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=(const Span &op)
{
	if (this == &op)
		return *this;
	this->_size = op._size;
	this->_values = op._values;
	this->_assignedValues = op._assignedValues;
	return *this;
}

void			Span::addNumber(int n)
{
	if (this->_assignedValues < (int)this->_size)
	{
		this->_values[_assignedValues] = n;
		this->_assignedValues++;
	}
	else
		throw Span::PositionAccessException();
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	min;

	min = INT32_MAX;
	for (int i = 0; i < (int)this->_size; i++)
	{
		if ((unsigned int)this->_values[i] < min)
			min = this->_values[i];
	}
	return min;
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	max;

	max = 0;
	for (int i = 0; i < (int)this->_size; i++)
	{
		if ((unsigned int)this->_values[i] > max)
			max = this->_values[i];
	}
	return max;
}
