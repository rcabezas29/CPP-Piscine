/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:04:58 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/19 07:05:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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
		Zombie &operator=(const Zombie &zombie);

		void	announce(void);
};
Zombie	*new_zombie(std::string name);
Zombie	*randomChump(std::string name);
#endif
