/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:20:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 11:49:06 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string myTarget) : Form("ShrubberyCreationForm", 145, 137, myTarget)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &myShrubbery) : Form(myShrubbery.getName(), myShrubbery.getGradeForSignature(), myShrubbery.getGradeForExecution(), myShrubbery.getTarget())
{
	*this = myShrubbery;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm & myShrubbery)
{
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw(IsNotSignedException());
	if (!this->bureaucratCanExecute(executor))
		throw(GradeTooLowException());
	std::string filename;
	filename = this->getTarget() + ".txt";
	std::ofstream MyFile(filename);
	MyFile << " TREE FOREST " << std::endl;
	MyFile.close();
	return ;
}