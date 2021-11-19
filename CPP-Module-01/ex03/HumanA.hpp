#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		*_gun;
		std::string	_name;

	public:
		HumanA(void);
		HumanA(std::string name, Weapon gun);
		~HumanA(void);
		HumanA &operator=(const HumanA &HumanA);

		void	attack();
};

#endif