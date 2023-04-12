/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:49:17 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 17:18:36 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

Sample::Sample(char c, int i) : c1(c), i1(i) 
{
	std::cout << "Appel du premier constructeur !" << std::endl;
	this->_i = 5;
	this->i1 = _bar(i);
	return ;
}

Sample::~Sample(void) 
{
	std::cout << "Appel du premier destructeur !" << std::endl;
	return ;
}

int	Sample::bar(int i)
{
	std::cout << "Appel de la fonction bar !" << std::endl;
	std::cout << "L'implementation de variables par la technique des listes donne : " << this->c1 << " et " << this->i1 << std::endl;
	return (i * 10);	
}

int	Sample::_bar(int i)
{
	std::cout << "Appel de la fonction privee _bar !" << std::endl;
	return (i * -10);	
}