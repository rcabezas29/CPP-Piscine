#include "HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "Contrcutor called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon gun)
{
	std::cout << "Copy constructot called" << std::endl;
	this->_name = name;
	this->_gun = &gun;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}
