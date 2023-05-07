/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:58:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 16:49:10 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor has been called" << std::endl;
	this->Cat_brain = new Brain();
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
	delete this->Cat_brain;
	return ;
}

Cat	&	Cat::operator=(const Cat &myCat)
{
	std::cout << "Cat assignment operator has been called" << std::endl;
	if (this->Cat_brain == myCat.Cat_brain)
		return (*this);
	if (this->Cat_brain)
		delete this->Cat_brain;
	this->Cat_brain = new Brain(*myCat.Cat_brain);
	this->type = myCat.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows" << std::endl;
	return ;
}
