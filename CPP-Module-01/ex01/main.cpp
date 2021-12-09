/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:05:08 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/09 20:45:10 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(5, "Tim");
	horde->set_name("Kevin");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde; 
}
