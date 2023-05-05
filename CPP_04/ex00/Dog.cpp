/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:36:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:30:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor has been called" << std::endl;
	return ;
}

Dog::Dog(const Dog &myDog) : Animal()
{
	std::cout << "Copie constructor Dog has been called" << std::endl;
	*this = myDog;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor has been called" << std::endl;
	return ;
}

Dog	&	Dog::operator=(const Dog &myDog)
{
	std::cout << "Dog assignment operator has been called" << std::endl;
	if (this != &myDog)
		*this = myDog;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog barks" << std::endl;
	return ;
}

// std::string	Dog::getType(void) const
// {
// 	return (this->type);
// }