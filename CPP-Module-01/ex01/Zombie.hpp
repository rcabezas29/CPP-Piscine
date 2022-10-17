/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:05:18 by rcabezas          #+#    #+#             */
/*   Updated: 2022/10/17 12:32:42 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	set_name(std::string _name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);
