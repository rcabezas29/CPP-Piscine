/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:24:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/05 19:40:59 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	_intVal;
		static const int _nbBits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed &operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif