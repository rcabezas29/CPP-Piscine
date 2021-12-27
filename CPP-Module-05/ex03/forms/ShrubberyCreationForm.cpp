/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:13:55 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:20:09 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberryCreation", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
	if (&op == this)
		return *this;
	this->_target = op._target;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "* Drilling noises *" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}
