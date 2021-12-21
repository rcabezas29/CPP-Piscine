/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:40:18 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 22:05:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSing;
		const int			_gradeToExecute;

	public:
		Form(std::string name, int sign, int exe);
		Form(const Form &copy);
		~Form(void);
		Form	&operator=(const Form &op);

		std::string	getName(void) const;
		bool		getSignState(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExe(void) const;

		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The form grade was too high";
			}
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The form grade was too high";
			}
		};

		void	beSigned(Bureaucrat &bureaucrat);
};
std::ostream	&operator<<(std::ostream &out, const Form &instance);