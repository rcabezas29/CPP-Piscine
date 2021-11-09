#include "Phonebook.hpp"
#include <cstddef>
#include <ostream>
#include <string>

Phonebook::Phonebook(void){}

void	Phonebook::search(void)
{
	int	to_search;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index  |   Name   | Lastname  |   Nick   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "| " << i << "| "
		<< this->contacts[i].getName() << "| "
		<< this->contacts[i].getLastname() << "| "
		<< this->contacts[i].getNickname() << "| "<< std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Who would you like to stalk?: " << std::endl;
	std::cin >> to_search;
	if (to_search < 0 || to_search > 7)
		std::cout << "Not a valid value" << std::endl;
	else
	{
		std::cout << "| " <<this->contacts[to_search].getName() 
			<< "| " << this->contacts[to_search].getLastname() << "| "
			<< this->contacts[to_search].getNickname() << "| "
			<< this->contacts[to_search].getPhone() << " |"
			<< this->contacts[to_search].getDarkestsecret() << " |" << std::endl;
	}

}
void	Phonebook::add(void)
{
	std::string	tmp;

	std::cout << "Name: ";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setName(tmp);
	std::cout << "Last Name: ";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setLastname(tmp);
	std::cout << "Nickname: ";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setNickname(tmp);
	std::cout << "Phone: ";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setPhone(tmp);
	std::cout << "Darkest secret: ";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setDarkestsecret(tmp);
	this->savedContacts++;
}
