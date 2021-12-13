/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:23 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 13:18:02 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : _gun(gun)
{
	std::cout << "HumanA constructor called" << std::endl;
	this->_name = name;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_gun.getType() << std::endl;
}
