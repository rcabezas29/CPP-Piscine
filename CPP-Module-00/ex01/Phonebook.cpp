#include "Phonebook.hpp"
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>

Phonebook::Phonebook(void){}

void	Phonebook::search(void)
{
	int	to_search;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |   Name   | Lastname |   Nick   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
		<< std::setw(10) << this->contacts[i].getName() << "|"
		<< std::setw(10) << this->contacts[i].getLastname() << "|"
		<< std::setw(10) << this->contacts[i].getNickname() << "|"<< std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Who would you like to stalk?: " << std::endl;
	std::cin >> to_search;
	if (to_search < 0 || to_search > 7)
		std::cout << "Not a valid value" << std::endl;
	else
	{
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "|   Name   | Lastname | Nickname |   Phone  |  Secret  |" << std::endl;
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << this->contacts[to_search].getName() 
			<< "|" << std::setw(10) << this->contacts[to_search].getLastname() << "|"
			<< std::setw(10) << this->contacts[to_search].getNickname() << "|"
			<< std::setw(10) << this->contacts[to_search].getPhone() << "|"
			<< std::setw(10) << this->contacts[to_search].getDarkestsecret() << "|" << std::endl;
	}

}
void	Phonebook::add(void)
{
	std::string	tmp;

	std::cout << "Name: ";
	std::cin >> tmp;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->contacts[this->savedContacts % 8].setName(tmp);
	std::cout << "Last Name: ";
	std::cin >> tmp;
	if (tmp.length() > 0)
		tmp = tmp.substr(0, 9) + ".";
	this->contacts[this->savedContacts % 8].setLastname(tmp);
	std::cout << "Nickname: ";
	std::cin >> tmp;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->contacts[this->savedContacts % 8].setNickname(tmp);
	std::cout << "Phone: ";
	std::cin >> tmp;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->contacts[this->savedContacts % 8].setPhone(tmp);
	std::cout << "Darkest secret: ";
	std::cin >> tmp;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->contacts[this->savedContacts % 8].setDarkestsecret(tmp);
	this->savedContacts++;
}
