/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:13:54 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/22 11:39:08 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

MutantStack::MutantStack(void)
{
	std::cout << "MutantStack constructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack &copy)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
}

MutantStack::~MutantStack(void)
{
	std::cout << "MutantStack destructor called" << std::endl;
}

MutantStack	&MutantStack::operator=(const MutantStack &op)
{
	if (this == &op)
		return *this;
	return *this;
}
