/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:06:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/22 11:48:20 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	MutantStack
{
	private:

	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		virtual	~MutantStack(void);
		MutantStack	&operator=(const MutantStack &op);

		void	push(int);
		void	top(void);
			
};
