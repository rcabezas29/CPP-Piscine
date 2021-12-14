/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:36:13 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/11 18:59:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &op)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " has enterred in Guard keeper mode" << std::endl;
}
