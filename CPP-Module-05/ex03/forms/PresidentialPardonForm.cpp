/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:12:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:18:53 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op)
{
	if (&op == this)
		return *this;
	this->_target = op._target;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::fstream file;

	file.open(this->_target + "_shrubbery", std::fstream::out);
	if(file.is_open())
	{
		file << "                                                         ." << std::endl;
        file << "                                              .         ;" << std::endl;
        file << "                 .              .              ;%     ;; " << std::endl;
        file << "                   ,           ,                :;%  %;" << std::endl;
        file << "                    :         ;                   :;%;'     ., " << std::endl;
        file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
        file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
        file << "                      `@%:.  :;%.         ;@@%;' " << std::endl;
        file << "                        `@%.  `;@%.      ;@@%;  " << std::endl;
		file << "                          `@%%. `@%%    ;@@%;" << std::endl;
		file << "                            ;@%. :@%%  %@@%;" << std::endl;
		file << "                              %@bd%%%bd%%:;" << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                %@@%%%::;" << std::endl;
		file << "                                %@@@%(o);  . '" << std::endl;
		file << "                                %@@@o%;:(.,'" << std::endl;
		file << "                            `.. %@@@o%::; " << std::endl;
		file << "                               `)@@@o%::;" << std::endl;
		file << "                                %@@(o)::;" << std::endl;
		file << "                               .%@@@@%::; " << std::endl;
		file << "                               ;%@@@@%::;." << std::endl;
		file << "                              ;%@@@@%%:;;;." << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
		file.close();
	}
}
