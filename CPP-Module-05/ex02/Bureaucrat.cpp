/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:53:03 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 12:42:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ostream>

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &op)
{
	if (this == &op)
		return *this;
	//this->_name = op.getName();
	this->_grade = op.getGrade();
	return *this;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

const std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

void	Bureaucrat::increaseGrade(int increment)
{
	this->_grade -= increment;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(int decrement)
{
	this->_grade += decrement;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(void)
{
	std::cout << this->_name <<" signed the form" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance)
{
	out << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return out;
}
