/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:30:11 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 13:13:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
		std::string		_claptrapName;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		virtual	~DiamondTrap(void);
		DiamondTrap	&operator=(const DiamondTrap &op);

		std::string	getClapTrapName(void) const;
		void		setClapTrapName(std::string claptrapName);
		
		void		attack(const std::string &target);
		void		whoAmI(void);
		
};

#endif