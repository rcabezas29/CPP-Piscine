#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>
#include <ostream>

class Phonebook
{
	private:
		Contact contacts[8];
		int		savedContacts = 0;

	public:
		Phonebook(void);
		void	add(void);
		void	search(void);
};
#endif