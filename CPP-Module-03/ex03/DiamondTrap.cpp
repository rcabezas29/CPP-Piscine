/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:17:27 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 16:34:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->_claptrapName = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &op)
{

}

DiamondTrap::~DiamondTrap(void)
{

}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &op);

void	DiamondTrap::whoAmI(void);