#include "Zombie.hpp"
#include <string>

Zombie	*new_zombie(std::string name)
{
	Zombie	*carl;

	carl = new Zombie(name);
	return carl;
}
