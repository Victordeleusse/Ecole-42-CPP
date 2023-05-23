/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:20:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 19:04:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string myTarget) : Form("ShrubberyCreationForm", 145, 137, myTarget)
{
	std::string filename;
	filename = myTarget + ".txt";
	std::ofstream MyFile(filename);
	MyFile << " TREE FOREST " << std::endl;
	MyFile.close();
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &myShrubbery) : Form(myShrubbery.getName(), myShrubbery.getGradeForSignature(), myShrubbery.getGradeForExecution(), myShrubbery.getTarget())
{
	std::string filename;
	filename = myShrubbery.getTarget() + ".txt";
	std::ofstream MyFile(filename);
	MyFile << " TREE FOREST " << std::endl;
	MyFile.close();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm & myShrubbery)
{
	if (this != &myShrubbery)
		*this = myShrubbery;
	return (*this);
}