/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:06:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 14:48:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int	RobotomyRequestForm::_round = 0;

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
	(void)myRobotomy;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw(IsNotSignedException());
	if (!this->bureaucratCanExecute(executor))
		throw(GradeTooLowException());
	if (this->_round == 0)
	{	
		std::cout << "\tDrill noise : DRRRRRRRRRRRRR" << std::endl;
		std::cout << this->getTarget() << " has been robotomysed" << std::endl;
		this->_round = 1;
	}
	else 
	{
		this->_round = 0;
		std::cout << "\t |X| FAILURE\n" << this->getTarget() << " operation of robotomorisation failed" << std::endl;
	}
	return ;	
}
