/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:00 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 20:19:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Animal::Animal(void)
{
	
}

Animal::Animal(const Animal &copy)
{

}

Animal::~Animal(void)
{

}

Animal &Animal::operator=(const Animal &copy)
{
	
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
	std::cout << "" << std::endl;
}