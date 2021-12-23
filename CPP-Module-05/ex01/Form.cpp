/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:19:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/23 10:15:40 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign, int exe) : _name(name), _signed(false), _gradeToSing(sign), _gradeToExecute(exe)
{
	//std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy._signed), _gradeToSing(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExe())
{
	//std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	//std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(const Form &op)
{
	if (this == &op)
		return *this;
	return *this;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

bool		Form::getSignState(void) const
{
	return this->_signed;
}

int			Form::getGradeToSign(void) const
{
	return this->_gradeToSing;
}

int			Form::getGradeToExe(void) const
{
	return this->_gradeToExecute;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else
	{
		bureaucrat.signForm(*this);
		this->_signed = true;
	}
}

std::ostream	&operator<<(std::ostream &out, const Form &instance)
{
	out << instance.getName() << " with sign grade " << instance.getGradeToSign() <<
		" and execute grade " << instance.getGradeToExe();
	if (instance.getSignState())
		std::cout << " is signed" << std::endl;
	else
		std::cout << " isn't signed" << std::endl;
}
