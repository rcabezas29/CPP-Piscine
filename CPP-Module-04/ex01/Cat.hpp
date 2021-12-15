/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:43:01 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/15 21:15:52 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <sys/types.h>
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &copy);
		virtual	~Cat(void);
		Cat	&operator=(const Cat &op);

		void	makeSound(void) const;
};

#endif