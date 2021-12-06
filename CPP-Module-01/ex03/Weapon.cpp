/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:47 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/06 20:06:53 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <ostream>

Weapon::Weapon(std::string name)
{
	std::cout << "Weapon constructor called" << std::endl;
	this->setType(name);
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called" << std::endl;
}

std::string const &	Weapon::getType(void)
{
	return this->_type;
}

void				Weapon::setType(std::string _type)
{
	this->_type = _type;
}