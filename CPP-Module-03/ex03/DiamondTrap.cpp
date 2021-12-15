/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:17:27 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 18:43:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_claptrapName = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << this->_hitPoints << std::endl;
	std::cout << this->_energyPoints << std::endl;
	std::cout << this->_attackDamage << std::endl;

	
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Assignation operator called"<< std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	this->_hitPoints = op.getHitPoints();
	this->_energyPoints = op.getEnergyPoints();
	this->_attackDamage = op.getAttackDamage();
	return (*this);
	
}

std::string	DiamondTrap::getClapTrapName(void) const
{
	return this->_claptrapName;
}

void		DiamondTrap::setClapTrapName(std::string claptrapName)
{
	this->_claptrapName = claptrapName;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->getName() << " and my ClapTrap name is " << this->getClapTrapName() << std::endl;
}
