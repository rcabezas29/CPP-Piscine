/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:57:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/22 08:58:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;

	for (int i = 0; i < 5; i++)
		v.push_back(i * 2);

	try
	{
		easyfind(v, 4);
	}
	catch (int)
	{
		std::cout << "The number couldn't be find" << std::endl;
	}

	return 0;
}
