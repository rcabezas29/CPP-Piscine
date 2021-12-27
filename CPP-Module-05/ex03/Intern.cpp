/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:32:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:49:37 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &op)
{
	std::cout << "Intern assignation operator called" << std::endl;
	return *this;
}


Form	*Intern::makeForm(std::string form, std::string target) const
{
	std::string	forms[3] = {"robotomy request", "shrubberry creation", "presidential pardon"};
	Form		*(*f[4])(std::string);
	Form		*ret;

	f[0] = &createRobotomyRequestForm(target);
	f[1] = &createShrubberyCreationForm(target);
	f[2] = &createPresidentialPardonForm(target);

	for (int i = 0; i < 4; i++)
	{
		if (forms[i] == form)
		{
			ret = (*f[i])(target);
			return ret;
		}
	}
	std::cout << "Intern wasn't able to create that function" << std::endl;
}

Form	*createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form	*createRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form	*createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}