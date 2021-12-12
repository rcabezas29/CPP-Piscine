/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:05:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/11 21:47:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	private:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal &copy);
		virtual ~Animal(void);
		Animal &operator=(const Animal &copy);

		std::string	getType(void) const;
		void		setType(std::string type);

		virtual void		makeSound(void) const;
		
	public:
		
};

#endif