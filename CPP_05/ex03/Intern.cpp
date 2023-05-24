/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:57:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:33:14 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &myIntern)
{
	*this = myIntern;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern	&	Intern::operator=(const Intern & myIntern)
{
	(void)myIntern;
	return (*this);
}

typedef Form* (Intern::*ptr_makeForm)(std::string);

Form	*Intern::makeForm(std::string formName, std::string target)
{
	std::string		formsNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	ptr_makeForm 	generateForm[3] = {&Intern::makeRRF, &Intern::makePPF, &Intern::makeSCF};
	
	int i = 0;
	int	size = (sizeof(formsNames) / sizeof(std::string));

	while (i < size)
	{
		if (formName.compare(formsNames[i]))
			i++;
		else 
			break;
	}
	if (i == size)
	{	
		std::cout << "This formula doesn t exist !" << std::endl;
		return (NULL);
	}
	else
	{	
		std::cout << "Intern creates" << formName << std::endl;
		return (this->*generateForm[i])(target);
	}
} 

Form	*Intern::makeRRF(std::string target)
{
	Form *returnForm = new RobotomyRequestForm(target);
	return (returnForm);
}

Form	*Intern::makePPF(std::string target)
{
	Form *returnForm = new PresidentialPardonForm(target);
	return (returnForm);
}

Form	*Intern::makeSCF(std::string target)
{
	Form *returnForm = new ShrubberyCreationForm(target);
	return (returnForm);
}
