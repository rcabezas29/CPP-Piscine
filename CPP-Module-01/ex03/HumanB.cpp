#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "Contrcutor called" << std::endl;
}

HumanB::HumanB(std::string name)
{
	std::cout << "Copy constructot called" << std::endl;
	this->_name = name;
	this->_gun = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (!this->_gun)
		std::cout << "Oh, ... oh " << this->_name << " has no weapon." << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}

