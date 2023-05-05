/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:56:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 15:57:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal("WrongAnimal")
{
	std::cout << "WRONG_Animal constructor has been called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &myWrongAnimal) : Animal()
{
	std::cout << "Copie constructor WRONG_Animal has been called" << std::endl;
	*this = myWrongAnimal;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WRONG_Animal destructor has been called" << std::endl;
	return ;
}

WrongAnimal	&	WrongAnimal::operator=(const WrongAnimal &myWrongAnimal)
{
	std::cout << "WRONG_Animal assignment operator has been called" << std::endl;
	if (this != &myWrongAnimal)
		*this = myWrongAnimal;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG_Animal is yelling" << std::endl;
	return ;
}

