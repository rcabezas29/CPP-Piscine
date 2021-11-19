#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string name);
		~Weapon(void);
		Weapon &operator=(const Weapon &Weapon);

		std::string const	&getType(void);
		void				setType(std::string _type);
};

#endif