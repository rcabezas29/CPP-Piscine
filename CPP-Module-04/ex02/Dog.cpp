/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 21:17:09 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_type = "dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Dog::~Dog(void)
{
	std::cout << "Destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	*(this->_brain) = *(op._brain);
	return *this;
}

AAnimal	&Dog::operator=(AAnimal const &op)
{
	std::cout << "Animal assignation operator for dog called" << std::endl;
	this->_type = op.getType();
	this->setBrain(op.getBrain());
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Woooof ... I love you." << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}

void	Dog::setBrain(Brain *brain)
{
	this->_brain = brain;
}