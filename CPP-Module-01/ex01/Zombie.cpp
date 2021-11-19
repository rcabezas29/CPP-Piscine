#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default Constructor called" << std::endl;
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

void	Zombie::set_name(std::string _name)
{
	this->_name = _name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}
