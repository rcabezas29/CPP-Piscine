/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:58:01 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/22 09:05:20 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	easyfind(T t, int n)
{
	for (unsigned long i = 0; i < t.size(); i++)
	{
		if (t[i] == n)
		{
			std::cout << n << " was find at " << i << " position" << std::endl;
			return ;
		}
	}
	throw 1;
}
