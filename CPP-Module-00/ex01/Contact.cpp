/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:07:15 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 09:31:14 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setName(std::string name)
{
	this->name = name;
}

std::string	Contact::getName(void)
{
	return (this->name);
}

void	Contact::setLastname(std::string last_name)
{
	this->last_name = last_name;
}

std::string	Contact::getLastname(void)
{
	return (this->last_name);
}

void		Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

void		Contact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string	Contact::getPhone(void)
{
	return (this->phone);
}

void		Contact::setDarkestsecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getDarkestsecret(void)
{
	return (this->darkest_secret);
}
