/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:50 by rcabezas          #+#    #+#             */
/*   Updated: 2022/10/17 12:34:40 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string name);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string _type);
};
