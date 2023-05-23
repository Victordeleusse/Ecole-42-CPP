/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:27:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 18:26:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string myName, int initGradeSign, int initGradeExec, std::string myTarget): name(myName), isSigned(0), target(myTarget)
{
	std::cout << "Form constructor has been called" << std::endl;
	if (initGradeExec < 1 || initGradeSign < 1)
		throw(GradeTooHighException());
	if (initGradeExec > 150 || initGradeSign >150)
		throw(GradeTooLowException());
	this->gradeForSignature = initGradeSign;
	this->gradeForExecution = initGradeExec;
	return ;
}

Form::Form(const Form & myForm) 
{
	std::cout << "Form Copie constructor has been called" << std::endl;
	*this = myForm;
	return ;
}

Form::~Form()
{
	std::cout << "Form destructor has been called" << std::endl;
	return ;
}

Form & Form::operator=(const Form &myForm)
{
	if (this != &myForm)
	{
		this->isSigned = myForm.isSigned;
		*const_cast<std::string *>(&this->name) = myForm.getName();
		this->gradeForSignature = myForm.getGradeForSignature();
		this->gradeForExecution = myForm.getGradeForExecution();
	}
	return (*this);
}

std::string Form::getName() const
{
	return(this->name);
}

std::string Form::getTarget() const
{
	return(this->target);
}

bool	Form::getIsSigned() const
{
	return(this->isSigned);
}

int	Form::getGradeForSignature() const
{
	return(this->gradeForSignature);
}

int	Form::getGradeForExecution() const
{
	return (this->gradeForExecution);
}

void	Form::beSigned(Bureaucrat myBureaucrat)
{
	if (this->isSigned)
		std::cout << this->getName() << " is already signed." << std::endl;
	else if (myBureaucrat.getGrade() <= this->getGradeForSignature())
	{	
		this->isSigned = 1;
		std::cout << myBureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
	else
		throw(GradeTooLowException());
	return ;
}

const char* Form::GradeTooHighException::what(void) const throw() 
{
	return ("Form::exception: Grade is to high.");
}

const char* Form::GradeTooLowException::what(void) const throw() 
{
	return ("Form::exception: Grade is to low.");
}

std::ostream & operator<<(std::ostream &myOstream, const Form &myForm)
{
	myOstream << "This document named " << myForm.getName() << " needs to be signed by Bureaucrats level " << myForm.getGradeForSignature() << " and executed by Bureaucrats level " << myForm.getGradeForExecution();
	if (myForm.getIsSigned())
		myOstream << "\n\t -> this document is already signed." << std::endl;
	else
		myOstream << "\n\t -> this document is not signed yet." << std::endl;
	return (myOstream);
}

