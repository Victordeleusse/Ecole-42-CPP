/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:06:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 11:48:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string myTarget) : Form("RobotomyRequestForm", 72, 45, myTarget)
{
	return ;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & myRobotomy) : Form("RobotomyRequestForm", 72, 45, myRobotomy.getTarget())
{
	*this = myRobotomy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm	&	RobotomyRequestForm::operator=(const RobotomyRequestForm &myRobotomy)
{
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw(IsNotSignedException());
	if (!this->bureaucratCanExecute(executor))
		throw(GradeTooLowException());
	std::cout << "Drill noise : DRRRRRRRRRRRRR" << std::endl;
	std::cout << this->getTarget() << "has been robotomysed" << std::endl;
	return ;	
}
