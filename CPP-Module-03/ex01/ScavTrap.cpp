/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 23:46:17 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/06 23:49:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "Contructor called" << std::endl;
	this->_name = _name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
