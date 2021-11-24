/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:23 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/21 11:31:24 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "Contrcutor called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon gun)
{
	std::cout << "Copy constructot called" << std::endl;
	this->_name = name;
	this->_gun = &gun;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}
