/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:06:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 10:39:02 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(){};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
		virtual ~MutantStack(void){};
		MutantStack	&operator=(const MutantStack &op)
		{
			if (this == &op)
				return *this;
			std::stack<T>::operator=(op);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) {return std::stack<T>::c.begin();};
		iterator	end(void) {return std::stack<T>::c.end();};
};
