#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{

}

void	Zombie::announce(void)
{
	std::cout << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
