/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:03:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 12:49:43 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"


Character::Character(const std::string character_name) : ICharacter()
{
	std::cout << "Character constructor has been called" << std::endl;
	int	i = 0;
	this->name = character_name;
	this->nb_AMpresents = 0;
	this->tab = new	AMateria*[4];
	while (i < 4)
	{
		this->tab[i] = NULL;
		i++;
	}
	return ;
}

Character::Character(const Character &myCharacter) : ICharacter()
{
	std::cout << "Copie constructor AMateria has been called" << std::endl;
	*this = myCharacter;
	return ;
}

Character::~Character()
{
	int	i = 0;
	
	std::cout << "Character destructor has been called" << std::endl;
	if (this->tab)
	{
		while (i < 4)
		{
			if (this->tab[i])
				delete this->tab[i];
			i++;
		}
		delete [] this->tab;
	}
	return ;
}

Character	&	Character::operator=(const Character &myCharacter)
{
	int	i = 0;
	
	if (this->tab == myCharacter.tab)
		return (*this);
	this->name = myCharacter.getName();
	this->nb_AMpresents = myCharacter.nb_AMpresents;
	if (this->tab)
	{
		while (i < 4)
		{
			if (this->tab[i])
				delete this->tab[i];
			i++;
		}
		delete [] this->tab;
	}
	this->tab = new	AMateria*[4];
	while (i < 4)
	{
		this->tab[i] = myCharacter.tab[i];
		i++;
	}
	return (*this);	
}

std::string const & Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	int	i;
	
	if (nb_AMpresents == 4)
		return ; 
	i = 0;
	while (this->tab[i])
		i++;
	this->tab[i] = m;
	nb_AMpresents++;
	return ;
}

void	Character::unequip(int idx)
{
	if (nb_AMpresents == 0)
		return ; 
	delete this->tab[idx];
	nb_AMpresents--;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || !this->tab[idx])
		return ;
	this->tab[idx]->use(target);
	return ;
}
