/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:10:08 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 08:57:30 by rcabezas         ###   ########.fr       */
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

int	Span::shortestSpan(void) const
{
	int	shortest;

	shortest = INT32_MAX;
	if (this->_size <= 1)
		throw Span::NoNumbersToSpan();
	for (unsigned int i = 0; i < this->_size - 1; i++)
	{
		if (std::abs(this->_values[i] - this->_values[i + 1]) < shortest)
			shortest = std::abs(this->_values[i] - this->_values[i + 1]);
	}
	if (shortest < 0)
		shortest *= -1;
	return shortest;
}

int	Span::longestSpan(void) const
{
	int	longest;

	longest = 0;
	if (this->_size <= 1)
		throw Span::NoNumbersToSpan();
	for (unsigned int i = 0; i < this->_size - 1; i++)
	{
		if (std::abs(this->_values[i] - this->_values[i + 1]) > longest)
			longest = std::abs(this->_values[i] - this->_values[i + 1]);
	}
	if (longest < 0)
		longest *= -1;
	return longest;
}
