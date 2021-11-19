/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:04:31 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/19 07:04:34 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	heap_zombie()
{
	Zombie	*h_zombie;

	h_zombie = randomChump("Patrick");
	delete h_zombie;
}

void	stack_zombie()
{
	Zombie	s_zombie("Dick");

	s_zombie.announce();
}

int	main(void)
{
	stack_zombie();
	heap_zombie();
	return 0;
}
