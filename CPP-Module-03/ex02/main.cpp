/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:23:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 18:30:59 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");
	FragTrap	frag("Frag");

	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());
	
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	
	clap.beRepaired(5);

	scav.guardGate();

	frag.attack("himself");
	frag.takeDamage(frag.getAttackDamage());

	frag.highFivesGuys();
	return 0;
}
