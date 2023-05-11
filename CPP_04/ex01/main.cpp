/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:03:39 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 18:14:11 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const Dog* k = new Dog();
	const Cat* l = new Cat();
	
	const Animal* tab[] = {i,j,k,l};
	i->makeSound();
	l->makeSound();

	int	size = sizeof(tab) / sizeof(Animal *);
	while (size)
	{
		delete tab[size - 1];
		size--;
	}
	return 0;
}
