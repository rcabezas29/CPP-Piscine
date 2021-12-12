/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:31:50 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 09:49:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

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

#endif
