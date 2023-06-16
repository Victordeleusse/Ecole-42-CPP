/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:04:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 18:57:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Definir toutes les fonctions de parsing dans le constructeur
// Si c est un unsigned int compris entre 0 et 10
// Pas de symbole autre que +-/*
// Gestion des espaces ... on peut mettre 15 espaces d affiles pas de probleme 
// def un bool pour s assurer de l alternance ?? 


RPN::RPN(std::string input)
{
	std::string::iterator it = input.end();
	
	while(it!= input.begin())
	{	
		if (*it != ' ')
			std::cout << *it ;
		it--;
	}
	std::cout << *it << std::endl;
	return ;
}

RPN::RPN(const RPN &myRPN) {
	*this = myRPN;
}

RPN::~RPN() {
	return ;
}

std::stack<int>	RPN::getNumbers() const {
	return (this->numbersStack);
}

std::stack<char>	RPN::getOperations() const {
	return (this->operationsStack);
}

RPN	&	RPN::operator=(const RPN &myRPN)
{
	this->numbersStack = myRPN.getNumbers();
	this->operationsStack = myRPN.getOperations();
	return (*this);
}
