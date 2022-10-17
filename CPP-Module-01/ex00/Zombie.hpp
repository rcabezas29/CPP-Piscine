/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:04:58 by rcabezas          #+#    #+#             */
/*   Updated: 2022/10/17 12:32:06 by rcabezas         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);

		void		setName(std::string name);
		std::string	getName(void);
		
		void	announce(void);
};
Zombie	*new_zombie(std::string name);
Zombie	*randomChump(std::string name);
