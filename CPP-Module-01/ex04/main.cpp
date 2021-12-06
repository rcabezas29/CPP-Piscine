/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:30:50 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/06 20:20:40 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return 1;
	}
	Replace replacer((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
	replacer.get_line();
}
