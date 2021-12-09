/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:07:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/09 19:30:12 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _savedContacts(0)
{
}

void	Phonebook::search(void)
{
	int	to_search;
	std::string tableNum;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |   Name   | Lastname |   Nick   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
		<< std::setw(10) << this->_contacts[i].getName() << "|"
		<< std::setw(10) << this->_contacts[i].getLastname() << "|"
		<< std::setw(10) << this->_contacts[i].getNickname() << "|"<< std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Who would you like to stalk?: " << std::endl;
	std::getline(std::cin, tableNum);
	if (tableNum.size() > 1 || tableNum[0] < 48 || tableNum[0] > 55)
		std::cout << "Not a valid value" << std::endl;
	else
	{
		to_search = stoi(tableNum);
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "|   Name   | Lastname | Nickname |   Phone  |  Secret  |" << std::endl;
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << this->_contacts[to_search].getName() 
			<< "|" << std::setw(10) << this->_contacts[to_search].getLastname() << "|"
			<< std::setw(10) << this->_contacts[to_search].getNickname() << "|"
			<< std::setw(10) << this->_contacts[to_search].getPhone() << "|"
			<< std::setw(10) << this->_contacts[to_search].getDarkestsecret() << "|" << std::endl;
	}
}
void	Phonebook::add(void)
{
	std::string	tmp;

	std::cout << "Name: ";
	std::getline(std::cin, tmp);
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->_contacts[this->_savedContacts % 8].setName(tmp);
	std::cout << "Last Name: ";
	std::getline(std::cin, tmp);
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->_contacts[this->_savedContacts % 8].setLastname(tmp);
	std::cout << "Nickname: ";
	std::getline(std::cin, tmp);
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->_contacts[this->_savedContacts % 8].setNickname(tmp);
	std::cout << "Phone: ";
	std::getline(std::cin, tmp);
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->_contacts[this->_savedContacts % 8].setPhone(tmp);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, tmp);
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	this->_contacts[this->_savedContacts % 8].setDarkestsecret(tmp);
	this->_savedContacts++;
}
