/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:07:44 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/09 19:16:06 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>

class Phonebook
{
	private:
		Contact _contacts[8];
		int		_savedContacts;

	public:
		Phonebook(void);
		void	add(void);
		void	search(void);
};
#endif