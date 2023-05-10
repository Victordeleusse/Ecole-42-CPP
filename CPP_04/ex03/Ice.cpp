/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:48:08 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 16:54:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor has been called" << std::endl;
	return;
}

Ice::Ice(const Ice &myIce) : AMateria("ice")
{
	std::cout << "Copie constructor Ice has been called" << std::endl;
	*this = myIce;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor has been called" << std::endl;
	return;
}

Ice	&	Ice::operator=(const Ice &myIce)
{
	if (this != &myIce)
		*this = myIce;
	return (*this);
}

AMateria	*Ice::clone(void)  const
{
	AMateria	*myIce = new Ice();
	
	return (myIce);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
	return ;
}
