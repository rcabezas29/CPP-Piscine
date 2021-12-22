/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:09:58 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/22 10:03:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Span
{
	private:
		unsigned int 	_size;
		int				*_values;
		int				_assignedValues;

	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span(void);
		Span	&operator=(const Span &op);

		void			addNumber(int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
};
