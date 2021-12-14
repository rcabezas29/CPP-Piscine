/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:30:11 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 21:34:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class	DiamondTrap: public ScavTrap, FragTrap
{
	private:
		std::string		_name;
		std::string		_claptrapName;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &op);
		virtual	~DiamondTrap(void);
		DiamondTrap	&operator=(const DiamondTrap &op);

		void	whoAmI(void);
		
};

#endif