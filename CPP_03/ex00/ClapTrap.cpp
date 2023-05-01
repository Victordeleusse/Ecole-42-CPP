/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:45:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 13:01:16 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Constructor called  : " << this->name << " has been created." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &myClapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = myClapTrap;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called : bye-bye " << this->name << std::endl;
	return ;
}

ClapTrap	&	ClapTrap::operator=(const ClapTrap &myClapTrap)
{
	if (this != &myClapTrap)
	{
		this->name = myClapTrap.name;
		
	}
}