/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:31 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 13:42:48 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _gun(NULL), _name(name)
{
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (!this->_gun)
		std::cout << "Oh, ... oh " << this->_name << " has no weapon." << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_gun = &club;
}
