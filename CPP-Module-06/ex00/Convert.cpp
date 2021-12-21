/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:38:42 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 13:02:01 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cctype>
#include <cstdlib>

Convert::Convert(void)
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(char *arg)
{
	
	std::cout << "Convert constructor called" << std::endl;
	this->_floater = std::atof(arg);
	this->_integer = std::atoi(arg);
	if (std::isprint(this->_integer))
		this->_character = (char)this->_integer;
	else
		this->_character = "Non printable";
	this->_dbl = (double)this->_floater;
}

Convert::Convert(const Convert &copy)
{
	std::cout << "Convert copy constructor called" << std::endl;
	*this = copy;
}

Convert::~Convert(void)
{
	std::cout << "Convert destructor called" << std::endl;
}

Convert	&Convert::operator=(const Convert &op)
{
	std::cout << "Convert assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->_character = op._character;
	this->_dbl = op._dbl;
	this->_floater = op._floater;
	this->_integer = op._integer;
	return *this;
}

void	Convert::displayAtributes(void)
{
	std::cout << "char: " << this->_character << std::endl;
	std::cout << "int: " << this->_integer << std::endl;
	std::cout << "float: " << this->_floater << std::endl;
	std::cout << "double: " << this->_dbl << std::endl;	
}
