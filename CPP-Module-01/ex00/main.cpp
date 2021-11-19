#include "Zombie.hpp"

void	heap_zombie()
{
	Zombie	*h_zombie;

	h_zombie->new_zombie("Patrick");
	h_zombie->announce();
	delete h_zombie;
}

void	stack_zombie()
{
	Zombie	s_zombie("Dick");

	s_zombie.announce();
}

int	main(void)
{
	stack_zombie();
	heap_zombie();
	return 0;
}
