/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:49:54 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 19:36:22 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & newType) : type(newType)
{
	std::cout << "String AMateria constructor has been called" << std::endl;
	return;
}

AMateria::AMateria(const AMateria &myAMateria)
{
	std::cout << "Copie constructor AMateria has been called" << std::endl;
	*this = myAMateria;
	return ;	
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor has been called" << std::endl;
	return ;
}

Amateria	&	AMateria::operator=(const AMateria &myAMateria)
{
	std::cout << "AMateria assignment operator has been called" << std::endl;
	if (this != &myAMateria)
		this->type = myAMateria.getType();
	return (*this);
}

const std::string	&	AMateria::getType(void)
{
	return(this->type);
}

// clone function -> A pure virtual function, not necessarily defined

void	AMateria::use(ICharacter& target)
{
	std::cout << "* use function called for " << target.name << " *" << std::endl;
	return ;
}
