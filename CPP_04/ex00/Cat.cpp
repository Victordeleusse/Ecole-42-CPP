/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:58:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 10:57:05 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : type("Cat")
{
	std::cout << "Cat constructor has been called" << std::endl;
	return ;
}

Cat::Cat(const Cat &myCat)
{
	std::cout << "Cat constructor Dog has been called" << std::endl;
	*this = myCat;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor has been called" << std::endl;
	return ;
}

Cat	&	Cat::operator=(const Cat &myCat)
{
	std::cout << "Cat assignment operator has been called" << std::endl;
	if (this != &myCat)
		*this = myCat;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "The cat meows" << std::endl;
	return ;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}
