/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:56:06 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/15 15:01:35 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string new_name) :  ClapTrap(), ScavTrap(new_name), FragTrap(new_name), name(new_name)
{
	std::cout << "Constructor for DiamondTrap called" << std::endl;
	this->ClapTrap::name = new_name + "_clap_name";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) : ClapTrap(), ScavTrap(DiamondTrap.name), FragTrap(DiamondTrap.name)
{
	*this = DiamondTrap;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	return ;
}

DiamondTrap	&	DiamondTrap::operator=(const DiamondTrap &myDiamondTrap)
{
	if (this != &myDiamondTrap)
	{	
		this->name = myDiamondTrap.name;
		this->ClapTrap::name = myDiamondTrap.ClapTrap::name;
		this->hit_points = myDiamondTrap.hit_points;
		this->energy_points = myDiamondTrap.hit_points;
		this->attack_damage = myDiamondTrap.attack_damage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Here is my name : " << this->name;
	std::cout << " And here is my ClapTrap's name " << ClapTrap::name << std::endl;
	return ;
}
