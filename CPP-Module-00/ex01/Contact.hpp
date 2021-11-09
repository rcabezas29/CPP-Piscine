#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	darkest_secret;

	public:
		Contact(void);
		void		setName(std::string name);
		std::string	getName(void);
		void		setLastname(std::string lastname);
		std::string	getLastname(void);
		void		setNickname(std::string nickname);
		std::string	getNickname(void);
		void		setPhone(std::string phone);
		std::string	getPhone(void);
		void		setDarkestsecret(std::string darkest_secret);
		std::string	getDarkestsecret(void);
};
#endif