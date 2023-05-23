/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:54:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 14:39:39 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name) 
{
	std::cout << "ScavTrap Constructor called  : " << this->name << " has been created." << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &myScavTrap) : ClapTrap(myScavTrap.name)
{
	std::cout << "ScavTrap Copy constructor from " << myScavTrap.name << " called." << std::endl;
	*this = myScavTrap;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called : bye-bye " << this->name << std::endl;
	return ;
}

ScavTrap	&	ScavTrap::operator=(const ScavTrap &myScaveTrap)
{
	if (this != &myScaveTrap)
	{	
		this->name = myScaveTrap.name;
		this->hit_points = myScaveTrap.hit_points;
		this->energy_points = myScaveTrap.energy_points;
		this->attack_damage = myScaveTrap.attack_damage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->hit_points)
	{	
		std::cout << "ScavTrap " << this->name << " can't attack because he has no more hit point! " << std::endl;
		return ;
	}
	if (!this->energy_points)
	{	
		std::cout << "ScavTrap " << this->name << " can't attack because he has no more energy point! " << std::endl;
		return ;
	}
	std::cout << "PAY ATTENTION ! ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (!this->hit_points)
	{	
		std::cout << "ScavTrap " << this->name << " can't move because he has no more hit point! " << std::endl;
		return ;
	}
	if (!this->energy_points)
	{	
		std::cout << "ScavTrap " << this->name << " can't move because he has no more energy point! " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " reachs gate keeper mode ! " << std::endl;
	this->energy_points--;
	return ;
}

