/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:16:06 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 12:10:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy.getName()),
	_hitPoints(copy.getHitPoints()),
	_energyPoints(copy.getEnergyPoints()),
	_attackDamage(copy.getAttackDamage())
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
		return *this;
    return *this;
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

void		ClapTrap::setHitPoints(unsigned int hp)
{
	this->_hitPoints = hp;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

void			ClapTrap::setEnergyPoints(unsigned int ep)
{
	this->_energyPoints = ep;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

void			ClapTrap::setAttackDamage(unsigned int ad)
{
	this->_attackDamage = ad;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}


void	ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap "<< this->_name << " attacks " << target << ", causing " <<
		this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->setEnergyPoints(this->getEnergyPoints() - amount);
	if (this->getEnergyPoints() < 0)
	{
		this->setEnergyPoints(0);
	}	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is being repaired with " << amount << 
		" points of health" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() + amount);
	if (this->getEnergyPoints() > 10)
	{
		this->setEnergyPoints(10);
	}
	std::cout << this->_name << " has now " << this->getEnergyPoints() <<
		" EP" << std::endl;
}
