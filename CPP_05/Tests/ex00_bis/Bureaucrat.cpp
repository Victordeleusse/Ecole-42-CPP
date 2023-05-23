/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:54:19 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 13:10:46 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string myName, unsigned int myGrade): name(myName), grade(myGrade)
{
	std::cout << "Bureaucrat values constructor has been called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &myBureaucrat)
{
	std::cout << "Bureaucrat Copie constructor has been called" << std::endl;
	*this = myBureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor has been called" << std::endl;
	return ;
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

Bureaucrat	&	Bureaucrat::operator=(const Bureaucrat	&myBureaucrat)
{
	if (this != &myBureaucrat)
	{
		this->grade = myBureaucrat.getGrade();
		*(const_cast<std::string *>(&this->name)) = myBureaucrat.getName();
	}
	return (*this);
}

void	Bureaucrat::downgradeBureaucrat(void)
{
	if (this->grade == 150)
		throw(GradeTooLowException());
	this->grade--;
	return;
}

void	Bureaucrat::upgradeBureaucrat(void)
{
	if (this->grade == 1)
		throw(GradeTooHighException());
	this->grade--;
	return;
}

std::ostream	& operator<<(std::ostream &myOstream, const Bureaucrat &myBureaucrat)
{
	myOstream << myBureaucrat.getName() << ", with the grade of : " << myBureaucrat.getGrade() << std::endl;
	return (myOstream);
}