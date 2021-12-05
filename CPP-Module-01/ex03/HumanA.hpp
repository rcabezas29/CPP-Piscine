/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:27 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/21 11:31:28 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		*_gun;
		std::string	_name;

	public:
		HumanA(void);
		HumanA(std::string name, Weapon gun);
		~HumanA(void);
		HumanA &operator=(const HumanA &HumanA);

		void	attack();
};

#endif