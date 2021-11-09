#include "Phonebook.hpp"

int	main(void)
{
	std::string	action;
	Phonebook	blackberry;

	while (1)
	{
		std::cout << "What do you want to do?" << std::endl;
		std::cin >> action;
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
