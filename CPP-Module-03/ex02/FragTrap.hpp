/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:20:48 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 18:04:18 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string _name);
		FragTrap(const FragTrap &copy);
		virtual	~FragTrap(void);
		FragTrap &operator=(const FragTrap &op);

		void	highFivesGuys(void);
};

#endif