/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:35:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 21:34:45 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class	ScavTrap : virtual ClapTrap
{
	private:

	public:
		ScavTrap(std::string _name);
		virtual	~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &op);

		void	guardGate(void);
};
