/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:46:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 16:49:11 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Perso1("Victor");
	ScavTrap	Perso2("Titouan");
	ScavTrap	Perso3(Perso2);

	Perso1.attack("Alice");
	Perso2.takeDamage(10);
	Perso2.attack("Jean");
	Perso3.beRepaired(10);

	return (0);	
}