/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:55:07 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 20:46:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	number;
	Data		*returned;

	data = new Data;
	data->n = 5;
	number = serialize(data);
	returned = deserialize(number);
	std::cout << returned->n << std::endl;

	return 0;
}
