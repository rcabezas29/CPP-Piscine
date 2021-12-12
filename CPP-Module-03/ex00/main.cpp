/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:23:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/11 10:32:27 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Freddy");
	std::string	target;

	target = "Jimmy";
	clap.attack(target);
	clap.beRepaired(5);
	return 0;
}
