/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:38:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 15:54:09 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : Animal("WrongCat"), WrongAnimal()
{
	std::cout << "WRONG_Cat constructor has been called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &myWrongCat) : Animal("WrongCat"), WrongAnimal()
{
	std::cout << "Copie constructor WRONG_Cat has been called" << std::endl;
	*this = myWrongCat;
	return ;
}
WrongCat::~WrongCat()
{
	std::cout << "WRONG_Cat destructor has been called" << std::endl;
	return ;
}

WrongCat	&	WrongCat::operator=(const WrongCat &myWrongCat)
{
	std::cout << "WRONG_Cat assignment operator has been called" << std::endl;
	if (this != &myWrongCat)
		*this = myWrongCat;
	return (*this);
}
