/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:56:29 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 21:09:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <array>

template<typename T>
class	Array
{
	private:
		T	_array[];

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &copy);
		~Array(void);
		Array	&operator=(const Array &op);
		Array	&operator[](size_t pos);

		int	size(void) const;
};

#endif