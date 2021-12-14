/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:37:42 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 21:38:20 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Uncomprehensive sound" << std::endl;
}
