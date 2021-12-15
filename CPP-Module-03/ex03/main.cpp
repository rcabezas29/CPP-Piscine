/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:23:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 13:19:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");
	FragTrap	frag("Frag");
	DiamondTrap	diamond("Diamond");

	clap.attack(scav.getName());
	scav.takeDamage(scav.getAttackDamage());
	
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	
	clap.beRepaired(5);

	scav.guardGate();

	diamond.whoAmI();
	return 0;
}
