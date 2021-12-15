/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:07:39 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 20:01:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void		Animal::setType(std::string type)
{
	this->_type = type;
}

void		Animal::makeSound(void) const
{
	std::cout << "Uncomprehensive sound" << std::endl;
}
