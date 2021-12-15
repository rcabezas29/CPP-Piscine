/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:35:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 20:31:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &copy);
		virtual	~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &op);

		void	attack(const std::string &target);
		void	guardGate(void);
};
