#include "Phonebook.hpp"
#include <string>

Phonebook::Phonebook(void)
{
	return ;
}

void	Phonebook::search(void)
{
	std::string	to_search;

	std::cout << "Who would you like to stalk?:";
	std::cin >> to_search;
}
void	Phonebook::add(void)
{
	std::string	tmp;

	std::cout << "Name:";
	std::cin >> tmp;
	this->contacts[this->savedContacts].setName(tmp);
	std::cout << "Last Name:";
	std::cin >> tmp;
	this->contacts[this->savedContacts].setLastname(tmp);
	std::cout << "Nickname:";
	std::cin >> tmp;
	this->contacts[this->savedContacts].setNickname(tmp);
	std::cout << "Phone:";
	std::cin >> tmp;
	this->contacts[this->savedContacts].setPhone(tmp);
	std::cout << "Darkest secret:";
	std::cin >> tmp;
	this->contacts[this->savedContacts].setDarkestsecret(tmp);
	this->savedContacts++;
}
