/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 13:42:56 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*_gun;
		std::string	_name;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack();
		void	setWeapon(Weapon &club);
};

#endif