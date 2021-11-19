#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*_gun;
		std::string	_name;

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		HumanB &operator=(const HumanB &HumanB);

		void	attack();
};

#endif