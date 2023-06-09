/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:45:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 09:53:25 by vde-leus         ###   ########.fr       */
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
	std::cout << "Copy constructor from " << myClapTrap.name << " called." << std::endl;
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
		this->hit_points = myClapTrap.hit_points;
		this->energy_points = myClapTrap.energy_points;
		this->attack_damage = myClapTrap.attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!this->hit_points)
	{	
		std::cout << "ClapTrap " << this->name << " can't attack because he has no more hit point! " << std::endl;
		return ;
	}
	if (!this->energy_points)
	{	
		std::cout << "ClapTrap " << this->name << " can't attack because he has no more energy point! " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points --;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hit_points)
	{	
		std::cout << "ClapTrap " << this->name << " can't takes damage because he has no more hit point! " << std::endl;
		return ;
	}
	if (this->hit_points >= amount)
	{	
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! ";
		this->hit_points -= amount;
		std::cout << "He has now " << this->hit_points << " hit points left! " << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " takes damage and has no more hit point! " << std::endl;
		this->hit_points = 0;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hit_points)
	{	
		std::cout << "ClapTrap " << this->name << " can't be repaired because he has no more hit point! " << std::endl;
		return ;
	}
	if (!this->energy_points)
	{	
		std::cout << "ClapTrap " << this->name << " can't be repaired because he has no more energy point! " << std::endl;
		return ;
	}
	this->hit_points += amount;
	std::cout << "ClapTrap " << this->name << " has been repaired and has now " << this->hit_points << " hit points left! "<< std::endl;
	this->energy_points--;
	return ;
}