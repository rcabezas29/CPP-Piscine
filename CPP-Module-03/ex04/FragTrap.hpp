/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:20:48 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 21:34:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual ClapTrap
{
	private:

	public:
		FragTrap(std::string _name);
		virtual	~FragTrap(void);
		FragTrap &operator=(const FragTrap &op);

		void	highFivesGuys(void);
};

#endif