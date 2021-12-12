/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:16:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/11 10:47:06 by rcabezas         ###   ########.fr       */
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
		ClapTrap(std::string _name);
		virtual	~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &op);

		void			setName(std::string name);
		std::string		getName(void);
		void			setHitPoints(unsigned int hp);
		unsigned int	getHitPoints(void);
		void			setEnergyPoints(unsigned int ep);
		unsigned int	getEnergyPoints(void);
		void			setAttackDamage(unsigned int ad);
		unsigned int	getAttackDamage(void);
		

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
