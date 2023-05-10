/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:58:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 16:38:12 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor has been called" << std::endl;
	return ;
}

Cat::Cat(const Cat &myCat) : Animal()
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

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows" << std::endl;
	return ;
}
