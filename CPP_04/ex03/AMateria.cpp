/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:49:54 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 17:33:55 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

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

AMateria	&	AMateria::operator=(const AMateria &myAMateria)
{
	std::cout << "AMateria assignment operator has been called" << std::endl;
	if (this != &myAMateria)
		this->type = myAMateria.getType();
	return (*this);
}

const std::string	&	AMateria::getType(void) const
{
	return(this->type);
}

// void	AMateria::setType(const std::string new_type)
// {
// 	this->type = new_type;
// 	return ;
// }

// 1 : clone function -> A pure virtual function, not necessarily defined

void	AMateria::use(ICharacter& target)
{
	std::cout << "* use function called for " << target.getName() << " *" << std::endl;
	return ;
}
// 2 : pourquoi ne pas rendre cette fonction virtuelle pure ??
