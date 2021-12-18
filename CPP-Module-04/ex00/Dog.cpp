/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 19:54:48 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("dog")
{
	std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Dog::~Dog(void)
{
	std::cout << "Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Woooof ... I love you." << std::endl;
}
