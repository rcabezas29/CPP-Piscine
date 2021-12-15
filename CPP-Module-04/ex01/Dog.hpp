/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:36:51 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 21:16:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;

	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual	~Dog(void);
		Dog	&operator=(const Dog &op);

		void	makeSound() const;
};

#endif