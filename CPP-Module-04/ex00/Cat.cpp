/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:00 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 20:02:43 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meeooow ... I hate you." << std::endl;
}