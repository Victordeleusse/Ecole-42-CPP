/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:38:02 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 10:38:22 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
	return ;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}