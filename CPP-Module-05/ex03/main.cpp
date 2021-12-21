/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:52:56 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 12:29:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int	main(void)
{
	Bureaucrat	bureaucrat("Jimmy", 150);
	Form		form("Law", 50, 50);	
	
	try
	{
		form.beSigned(bureaucrat);
		bureaucrat.increaseGrade(120);
		form.beSigned(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
