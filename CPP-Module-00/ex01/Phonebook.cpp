#include "Phonebook.hpp"
#include <string>

Phonebook::Phonebook(void){}

void	Phonebook::search(void)
{
	std::string	to_search;

	std::cout << "----------------------------------------\n";
	std::cout << 
	std::cout << "Who would you like to stalk?:";
	std::cin >> to_search;

}
void	Phonebook::add(void)
{
	std::string	tmp;

	std::cout << "Name:";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setName(tmp);
	std::cout << "Last Name:";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setLastname(tmp);
	std::cout << "Nickname:";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setNickname(tmp);
	std::cout << "Phone:";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setPhone(tmp);
	std::cout << "Darkest secret:";
	std::cin >> tmp;
	this->contacts[this->savedContacts % 8].setDarkestsecret(tmp);
	this->savedContacts++;
}
