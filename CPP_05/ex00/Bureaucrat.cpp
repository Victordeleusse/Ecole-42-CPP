/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:35:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/19 19:56:15 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Bureaucrat constructor has been called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string myName, int myGrade) : name(myName), grade(myGrade)
{
	std::cout << "Bureaucrat constructor has been called" << std::endl;
	try {
		this->grade <= 150;
		}
	catch (std::exception & e) 
		{
		this->gradeTooHighException();
		this->~Bureaucrat();
		}
	try {
		this->grade >= 1;
		}
	catch (std::exception & e) 
		{
		this->gradeTooLowException();
		this->~Bureaucrat();
		}	
	return ;		
}

Bureaucrat::Bureaucrat(const Bureaucrat & myBureaucrat)
{
	std::cout << "Bureaucrat Copie constructor has been called" << std::endl;
	*this = myBureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor has been called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &myBureaucrat)
{
	std::cout << "Bureaucrat assignment operator has been called" << std::endl;
	std::string* stringPtr = const_cast<std::string *>(&this->name);
	
	if (this != &myBureaucrat)
	{
		*stringPtr = myBureaucrat.getName();
		this->grade = myBureaucrat.getGrade();
	}
	return (*this);0
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

void	Bureaucrat::gradeTooHighException(void)
{
	std::cout << "The value of the grade is too high" << std::endl;
	return ;
}

void	Bureaucrat::gradeTooLowException(void)
{
	std::cout << "The value of the grade is too low" << std::endl;
	return ;
}

void	Bureaucrat::upgradeBureaucrat(void)
{
	try {
		this->grade - 1 >= 1;
	}
	catch (std::exception & e) 
		{
		this->gradeTooLowException();
		return ;
		}
	this->grade = this->grade - 1;
	return ;
}

void	Bureaucrat::downgradeBureaucrat(void)
{
	try {
		this->grade + 1 <= 150;
	}
	catch (std::exception & e) 
		{
		this->gradeTooHighException();
		return ;
		}
	this->grade = this->grade + 1;
	return ;
}

/////////////////

std::ostream	&	operator<<(std::ostream &myOutput, const Bureaucrat &myBureaucrat)
{
	myOutput << myBureaucrat.getName() << ", bureaucrat grade " << myBureaucrat.getGrade() << ".\n";
	return (myOutput);
}