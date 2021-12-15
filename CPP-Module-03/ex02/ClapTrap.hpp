/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:16:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 12:10:44 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;
		
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		virtual	~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &op);

		void			setName(std::string name);
		std::string		getName(void) const;
		void			setHitPoints(unsigned int hp);
		unsigned int	getHitPoints(void) const;
		void			setEnergyPoints(unsigned int ep);
		unsigned int	getEnergyPoints(void) const;
		void			setAttackDamage(unsigned int ad);
		unsigned int	getAttackDamage(void) const;
		

		void	attack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
