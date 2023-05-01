/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:25:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 18:45:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << "FragTrap Constructor called  : " << this->name << " has been created." << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &myFragTrap) : ClapTrap(myFragTrap.name)
{
	std::cout << "FragTrap Copy constructor from " << myFragTrap.name << " called." << std::endl;
	*this = myFragTrap;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called : bye-bye " << this->name << std::endl;
	return ;
}

FragTrap	&	FragTrap::operator=(const FragTrap &myFragTrap)
{
	if (this != &myFragTrap)
	{
		this->name = myFragTrap.name;
		this->hit_points = myFragTrap.hit_points;
		this->energy_points = myFragTrap.energy_points;
		this->attack_damage = myFragTrap.attack_damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (!this->hit_points)
	{	
		std::cout << "FragTrap " << this->name << " can't ask anything because he has no more hit point! " << std::endl;
		return ;
	}
	if (!this->energy_points)
	{	
		std::cout << "FragTrap " << this->name << " can't ask anything because he has no more energy point! " << std::endl;
		return ;
	}
	std::cout << "FragTrap  " << this->name << " asking for a high five ! " << std::endl;
	this->energy_points--;
	return ;	
}
