/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:14:14 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 15:48:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int	Brain::_nb_brains = 0;

Brain::Brain(void)
{
	std::cout << "BRAIN Constructor has been called" << std::endl;
	this->ideas = new std::string[BRAIN_CAPACITY];
	this->ideas[0] = "";
	_nb_brains++;
	return ;
}

Brain::Brain(const Brain &myBrain)
{
	std::cout << "BRAIN Copy Constructor has been called" << std::endl;
	int	i = 0;
	
	this->ideas = new std::string[BRAIN_CAPACITY];
	while (i < BRAIN_CAPACITY)
	{
		this->ideas[i] = myBrain.ideas[i];
		i++;
	}
	_nb_brains++;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "BRAIN Destructor has been called" << std::endl;
	if (this->ideas)
		delete [] this->ideas;
	_nb_brains--;
	return ;
}

Brain	&	Brain::operator=(const Brain &myBrain)
{
	std::cout << "BRAIN assignment operator has been called" << std::endl;
	if (this->ideas == myBrain.ideas)
		return (*this);
	if (this->ideas)
		delete [] this->ideas;
	int	i = 0;
	
	this->ideas = new std::string[BRAIN_CAPACITY];
	while (i < BRAIN_CAPACITY)
	{
		this->ideas[i] = myBrain.ideas[i];
		i++;
	}
	return (*this);
}

int	Brain::get_nbBrains(void)
{
	return (_nb_brains);
}
