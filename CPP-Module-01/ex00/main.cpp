/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:04:31 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/06 19:07:14 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	heap_zombie()
{
	Zombie	*h_zombie;

	std::cout << "Creating heap zombie" << std::endl;
	h_zombie = randomChump("Carl");
	delete h_zombie;
}

void	stack_zombie()
{
	Zombie	s_zombie("Patrick");

	std::cout << "Creating stack zombie" << std::endl;
	s_zombie.announce();
}

int	main(void)
{
	stack_zombie();
	heap_zombie();
	return 0;
}
