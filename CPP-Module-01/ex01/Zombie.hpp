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

		void	set_name(std::string _name);
		void	announce(void);
};
Zombie	*zombieHorde(int N, std::string name);
#endif