/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:20:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 15:09:30 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

typedef void	(Harl::*ptr_complain)(void);

void	Harl::complain(std::string level)
{
	std::string		instructions[4] = {"debug", "info", "warning", "error"};
	ptr_complain	ft_instructions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;
	int	size = (sizeof(instructions) / sizeof(std::string));

	while (i < size)
	{
		if (level.compare(instructions[i]))
			i++;
		else 
			break;
	}
	if (i == size)
		std::cout << "Wrong complain" << std::endl;
	else
		return (this->*ft_instructions[i])();	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming \
for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
