/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:32:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:34:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string myTarget) : Form("PresidentialPardonForm", 25, 5, myTarget)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &myPresident) : Form("PresidentialPardonForm", 25, 5, myPresident.getTarget())
{
	*this = myPresident;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm	&	PresidentialPardonForm::operator=(const PresidentialPardonForm &myPresident)
{
	(void)myPresident;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw(IsNotSignedException());
	if (!this->bureaucratCanExecute(executor))
		throw(GradeTooLowException());
	std::cout << this->getTarget() << " was pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}