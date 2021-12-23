/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:53:05 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/23 10:35:44 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <ostream>
#include <string>
#include "Form.hpp"

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat(void);
		Bureaucrat	&operator=(const Bureaucrat &op);
	
		int	getGrade(void) const;
		const std::string	getName(void) const;
		
		void	increaseGrade(int increment);
		void	decreaseGrade(int decrement);

		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The grade was too high";
			}
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The grade was too high";
			}
		};

		class	NotAbleToSignException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "<bureaucrat> cannot sign <form> because <reason>";
			}
		};

		void	signForm(Form &form);
};
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance);
