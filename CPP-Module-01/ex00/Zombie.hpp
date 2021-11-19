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
		Zombie	*new_zombie(std::string name);
		Zombie	*randomChump(std::string name);
};
#endif