/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:27 by rcabezas          #+#    #+#             */
/*   Updated: 2022/10/17 12:34:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		&_gun;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon &gun);
		~HumanA(void);

		void	attack();
};
