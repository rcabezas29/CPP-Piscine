/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:24:56 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 21:43:40 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const &type);
		virtual	~AMateria(void);
	
		std::string const	&getType(void) const; //Returns the materia type

		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif