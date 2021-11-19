#include "Weapon.hpp"
#include <iostream>
#include <ostream>

Weapon::Weapon(void)
{
	std::cout << "Contructor called" << std::endl;
}

Weapon::Weapon(std::string name)
{
	this->setType(name);
	std::cout << "Copy contructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string const &	Weapon::getType(void)
{
	return this->_type;
}

void				Weapon::setType(std::string _type)
{
	this->_type = _type;
}