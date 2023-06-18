/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:04:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/18 15:17:29 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Definir toutes les fonctions de parsing dans le constructeur
// Si c est un unsigned int compris entre 0 et 10
// Pas de symbole autre que +-/*
// Gestion des espaces ... on peut mettre 15 espaces d affiles pas de probleme 
// Par bloc de 2 jusqu a != begin () -> un int un char et basta -> le dernier devra etre un int

RPN::RPN(std::string input)
{
	if (input.size() < 3)
		throw(ArgumentsException());
	
	std::string::iterator	it = input.end();
	int						count = 0;
	
	it--;
	while(it!= input.begin())
	{	
		if (isspace(*it))
			;
		else if (count % 2 == 0)
		{
			if (isValidOperator(*it) == false)
				throw(InputException());
			count++;
		}
		else
		{
			if (isValidNumber(*it) == false)
				throw(InputException());
			count++;
		}
		it--;
	}
	if (isValidNumber(*it) == false)
		throw(InputException());
	if (this->numbersStack.size() != this->operationsStack.size() + 1)
		throw(InputException());
	return ;
}

RPN::RPN(const RPN &myRPN) {
	*this = myRPN;
}

RPN::~RPN() {
	return ;
}

std::stack<int>	RPN::getNumbersStack() const {
	return (this->numbersStack);
}

std::stack<t_data>	RPN::getOperationsStack() const {
	return (this->operationsStack);
}

RPN	&	RPN::operator=(const RPN &myRPN)
{
	this->numbersStack = myRPN.getNumbersStack();
	this->operationsStack = myRPN.getOperationsStack();
	return (*this);
}

bool	RPN::isValidNumber(char num)
{
	int			myInt;
	std::string	myString;
	
	myString = num;
	if (isdigit(num))
	{
		std::stringstream	ssl(myString);
		ssl >> myInt;
		if (ssl.fail())
			return(false) ;
		if (myInt >= 0 && myInt < 10)
		{
			this->numbersStack.push(myInt);
			return (true);
		}	
	}
	return (false);
}

bool	RPN::isValidOperator(char ope)
{
	t_data	data;
	
	data.symbole = ope;
	if (ope == '+')
	{	
		data.ope = ADDITION;
	}
	else if (ope == '-')
		data.ope = SOUSTRACTION;
	else if (ope == '*')
		data.ope = MULTIPLICATION;
	else if (ope == '/')
		data.ope = DIVISION;
	else
		return (false);
	this->operationsStack.push(data);
	return (true);
}

int	RPN::calcul()
{
	while(this->numbersStack.size() > 1)
	{
		int	&a = this->numbersStack.top();
		this->numbersStack.pop();
		int &b = this->numbersStack.top();
		this->numbersStack.pop();
		t_data ope = this->operationsStack.top();
		this->operationsStack.pop();
		switch (ope.ope)
		{
			case ADDITION :
				a += b;
				break;
			case SOUSTRACTION :
				a -= b;
				break;
			case MULTIPLICATION :
				a *= b;
				break;
			case DIVISION :
				a /= b;
				break;	
		}
		this->numbersStack.push(a);
	}
	return (this->numbersStack.top());
}