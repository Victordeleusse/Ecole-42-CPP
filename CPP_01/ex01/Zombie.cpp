/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:16:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 17:12:28 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
	std::cout << "Warning ! a new zombie named just appears !" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destruction of a zombie named " << this->name << std::endl;
	return ;
}

void	Zombie::ft_set_name(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::ft_anounce(int idx)
{
	std::cout << idx << ": Hello there, i'm still here !" << std::endl;
	return ;
}

