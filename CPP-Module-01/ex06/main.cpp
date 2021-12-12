/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:12:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 09:51:22 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	take_complain_level(std::string input)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == input)
			return (i);
	}
	return (5);
}

int	main(int argc, char **argv)
{
	Karen	karen;
	int		level;

	if (argc != 2)
	{
		std::cout << "Karen needs only one argument to complain" << std::endl;
		return (1);
	}
	level = take_complain_level((std::string)argv[1]);
	switch (level)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
