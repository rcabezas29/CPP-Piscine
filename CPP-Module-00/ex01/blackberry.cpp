#include "Phonebook.hpp"
#include <string>

int	main(void)
{
	std::string	action;
	Phonebook	blackberry;

	while (std::cout << "What do you want to do? " && std::getline(std::cin, action))
	{
		if (action == "ADD")
			blackberry.add();
		else if (action == "SEARCH")
			blackberry.search();
		else if (action == "EXIT")
			exit(0);
		else
			std::cout << "Error. Options are ADD, SEARCH and EXIT" << std::endl;
	}
}
