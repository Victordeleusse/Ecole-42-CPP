/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:17:27 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 17:22:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor has been called" << std::endl;
	return;
}

Cure::Cure(const Cure &myCure) : AMateria("cure")
{
	std::cout << "Copie constructor Ice has been called" << std::endl;
	*this = myCure;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor has been called" << std::endl;
	return;
}

Cure	&	Cure::operator=(const Cure &myCure)
{
	if (this != &myCure)
		*this = myCure;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria	*myCure = new Cure();
	
	*myCure = *this;
	return (myCure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

