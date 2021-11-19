#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
