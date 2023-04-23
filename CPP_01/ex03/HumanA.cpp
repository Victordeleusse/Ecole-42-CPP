/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:02:08 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/23 17:25:07 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_init, Weapon weapon) : name(name_init)
{	
	this->setWeaponA(weapon);
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::setWeaponA(Weapon weapon_type)
{
	this->weapon_type = weapon_type;
	return ;
}

Weapon	HumanA::getWeapon(void)
{
	return()
}