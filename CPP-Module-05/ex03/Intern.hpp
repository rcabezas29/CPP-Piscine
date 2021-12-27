/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:25:40 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:31:39 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &copy);
		~Intern(void);
		Intern	&operator=(const Intern &op);

		Form	*makeForm(std::string form, std::string target) const;
};
