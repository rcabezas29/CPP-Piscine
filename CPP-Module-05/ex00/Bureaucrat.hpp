/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:53:05 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 12:08:31 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

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
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &instance);

#endif