/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:04:29 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/16 09:29:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Animal	*farm[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			farm[i] = new Cat();
		if (i >= 10)
			farm[i] = new Dog();
	}
		

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	for (int i = 0; i < 20; i++)
		delete farm[i];
	return 0;
}
