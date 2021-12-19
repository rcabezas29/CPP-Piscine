/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:08:06 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 21:10:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(void)
{

}

Array::Array(unsigned int n)
{

}

Array::Array(const Array &copy);
Array::~Array(void);
Array	&Array::operator=(const Array &op);
Array	&Array::operator[](size_t pos);

int	Array::size(void) const
{

}
