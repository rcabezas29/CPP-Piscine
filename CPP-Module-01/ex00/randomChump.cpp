#include "Zombie.hpp"

Zombie	*randomChump(std::string name)
{
	Zombie	*carl;

	carl = new_zombie(name);
	carl->announce();
	return carl;
}
