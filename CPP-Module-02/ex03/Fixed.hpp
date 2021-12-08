/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:24:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/08 11:41:28 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class	Fixed
{
	private:
		int	_intVal;
		static const int _nbBits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int integer);
		Fixed(const float floater);
		~Fixed(void);
		Fixed	&operator=(const Fixed &fixed);

		bool	operator==(const Fixed &b) const;
		bool	operator!=(const Fixed &b) const;
		bool	operator<(const Fixed &b) const;
		bool	operator>(const Fixed &b) const;
		bool	operator<=(const Fixed &b) const;
		bool	operator>=(const Fixed &b) const;

		Fixed	operator+(const Fixed &b) const;
		Fixed	operator-(const Fixed &b) const;
		Fixed	operator*(const Fixed &b) const;
		Fixed	operator/(const Fixed &b) const;

		Fixed	operator++(void);
		// Fixed	& operator++(void);
		Fixed	operator--(void);
		// Fixed	& operator--(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixe);

#endif
