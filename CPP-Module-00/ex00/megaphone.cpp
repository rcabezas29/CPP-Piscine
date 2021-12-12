/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:58:22 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/09 18:58:22 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <iterator>
#include <ostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			if (i != argc - 1)
				std::cout << " ";
			i++;
		}
	}
	return (0);
}