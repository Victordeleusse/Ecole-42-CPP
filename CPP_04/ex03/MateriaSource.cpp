/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:31:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 14:27:36 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	int	i = 0;

	std::cout << "MateriaSource Constructor has been called" << std::endl;
	this->nb_AMlearned = 0;
	this->learning_tab = new AMateria*[4];
	while (i < 4)
	{
		this->learning_tab[i] = NULL;
		i++;
	}	
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &myMateriaSource) : IMateriaSource()
{
	std::cout << "MateriaSource Copy Constructor has been called" << std::endl;
	*this = myMateriaSource;
	return ;
}

MateriaSource::~MateriaSource()
{
	int	i = 0;
	
	std::cout << "MateriaSource destructor has been called" << std::endl;
	if (this->learning_tab)
	{
		while (i < 4)
		{	
			delete this->learning_tab[i];
			i++;
		}
		delete [] this->learning_tab;	
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 1;
	
	if (nb_AMlearned == 4)
	{		
		delete this->learning_tab[0];
		while (i < 4)
		{
			this->learning_tab[i - 1] = this->learning_tab[i];
			i++;
		}
		this->learning_tab[i - 1] = NULL;
		this->nb_AMlearned--;
	}
	AMateria	*new_m = m->clone();
	i = 0;
	while (this->learning_tab[i])
		i++;
	this->learning_tab[i] = new_m;
	this->nb_AMlearned++;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	
	if(this->nb_AMlearned == 0)
		return (NULL);
	if (strcmp(type, "ice") != 0 && strcmp(type, "cure") != 0)
		return (NULL);
	while (this->learning_tab[i])
		i++;
	AMateria	*new_m = this->learning_tab[--i].clone()
	new_m->setType(type);
	return (new_m);
}
