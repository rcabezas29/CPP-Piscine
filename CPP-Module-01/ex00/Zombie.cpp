/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:04:55 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/19 07:04:56 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor called from stack" << std::endl;
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}
