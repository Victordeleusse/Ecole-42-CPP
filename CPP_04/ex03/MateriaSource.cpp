/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:31:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 17:35:41 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"
#include <stdio.h>
#include <string.h>

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

MateriaSource	&	MateriaSource::operator=(const MateriaSource &myMateriaSource)
{
	int	i = 0;
	
	if (this->learning_tab == myMateriaSource.learning_tab)
		return (*this);
	this->nb_AMlearned = myMateriaSource.nb_AMlearned;
	if (this->learning_tab)
	{
		while (i < 4)
		{
			if (this->learning_tab[i])
				delete this->learning_tab[i];
			i++;
		}
		delete [] this->learning_tab;
	}
	this->learning_tab = new	AMateria*[4];
	while (i < 4)
	{
		this->learning_tab[i] = myMateriaSource.learning_tab[i];
		i++;
	}
	return (*this);	
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
	i = 0;
	while (this->learning_tab[i])
		i++;
	this->learning_tab[i] = m->clone();
	this->nb_AMlearned++;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	
	if(this->nb_AMlearned == 0)
		return (NULL);
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return (NULL);
	while (this->learning_tab[i] && type.compare(this->learning_tab[i]->getType()) != 0)
		i++;
	if (!this->learning_tab[i])
		return (NULL);
	AMateria	*new_m = this->learning_tab[i]->clone();
	return (new_m);
}

int	MateriaSource::get_nb_AMlearned(void)
{
	return (this->nb_AMlearned);
}
