/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:23:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/11 19:14:48 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");

	clap.attack(scav.getName());
	scav.takeDamage(scav.getAttackDamage());
	
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	
	clap.beRepaired(5);

	scav.guardGate();
	return 0;
}
