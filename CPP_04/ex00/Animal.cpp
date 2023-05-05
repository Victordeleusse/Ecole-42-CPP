/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:33:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:20:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal constructor has been called" << std::endl;
	return;
}

Animal::Animal(std::string new_type) : type(new_type)
{
	std::cout << "Animal constructor from a specific type has been called" << std::endl;
	return;
}

Animal::Animal(const Animal &myAnimal)
{
	std::cout << "Copie constructor Animal has been called" << std::endl;
	*this = myAnimal;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor has been called" << std::endl;
	return ;
}

Animal	&	Animal::operator=(const Animal &myAnimal)
{
	std::cout << "Animal assignment operator has been called" << std::endl;
	if (this != &myAnimal)
		*this = myAnimal;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes a sound" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
