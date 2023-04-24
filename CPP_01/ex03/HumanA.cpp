/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:02:08 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 10:42:10 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_init, Weapon &weapon) : name(name_init), weapon_type(weapon)
{	
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::setType(Weapon weapon)
{
	this->weapon_type = weapon;
	return ;
}

Weapon	HumanA::getWeaponA(void)
{
	return(this->weapon_type);
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon_type.getType() << std::endl;
	return ;
}