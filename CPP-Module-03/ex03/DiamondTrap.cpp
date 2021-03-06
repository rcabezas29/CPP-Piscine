/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:17:27 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 20:20:45 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
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

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}
