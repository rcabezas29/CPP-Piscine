#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(5, "Tim");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
}