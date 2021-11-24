/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:20:06 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/24 21:38:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{

}

void	debug(void)
{
	std::cout << "I love
		to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup
		burger. I just love it!." << std::endl;
}

void	info(void)
{
	std::cout << "I cannot
		believe adding extra bacon cost more money. You don’t put enough! If you
		did I would not have to ask for it!." << std::endl;
}

void	warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.
		I’ve been coming here for years and you just started working here last
		month..." << std::endl;
}

void	error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}