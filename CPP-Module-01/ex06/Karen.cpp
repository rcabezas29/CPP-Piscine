/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:20:06 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 13:51:23 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Constructor called" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*f[4])(void);

	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*f[i])();
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love" <<
		" to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup" <<
		" burger. I just love it!.\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot" <<
		" believe adding extra bacon cost more money. You don’t put enough! If you" <<
		" did I would not have to ask for it!.\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." <<
		" I’ve been coming here for years and you just started working here last" <<
		" month...\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}