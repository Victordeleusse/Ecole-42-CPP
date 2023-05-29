/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:35:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/29 17:16:31 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string myName, int myGrade) : name(myName),grade(myGrade)
{
	std::cout << "Bureaucrat constructor has been called" << std::endl;
	if (this->grade < 1)
		throw (InitGradeTooHighException());
	if (this->grade > 150)
		throw (InitGradeTooLowException());
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
	
	if (this != &myBureaucrat)
	{
		*const_cast<std::string *>(&this->name) = myBureaucrat.getName();
		// *const_cast<std::string *>(&this->name) = "Rotciv";
		this->grade = myBureaucrat.getGrade();
	}
	return (*this);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

void	Bureaucrat::upgradeBureaucrat(void)
{
	if (this->grade - 1 < 1)
		throw (GradeTooHighException());
	this->grade--;
	return ;
}

void	Bureaucrat::downgradeBureaucrat(void)
{
	if (this->grade + 1 > 150)
		throw (GradeTooLowException());
	this->grade++;
	return ;
}

void	Bureaucrat::signForm(Form &myForm)
{
	if (myForm.getIsSigned())
		std::cout << "This form is already signed" << std::endl;
	else
		myForm.beSigned(*this);
	return;
}

void	Bureaucrat::executeForm(const Form & form)
{
	if (!form.getIsSigned())
		throw(Form::IsNotSignedException());
	if (this->getGrade() > form.getGradeForExecution())
		throw(Form::GradeTooLowException());
	form.execute(*this);
	return;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat::exception: Grade is to high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat::exception: Grade is to low");
}

const char *Bureaucrat::InitGradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat::exception: Grade is to high - Bureaucrat not generated");
}

const char *Bureaucrat::InitGradeTooLowException::what(void) const throw()
{
	return("Bureaucrat::exception: Grade is to low - Bureaucrat destroyed"); 
}


/////////////////

std::ostream	&	operator<<(std::ostream &myOutput, const Bureaucrat &myBureaucrat)
{
	myOutput << myBureaucrat.getName() << ", bureaucrat grade " << myBureaucrat.getGrade() << ".\n";
	return (myOutput);
}