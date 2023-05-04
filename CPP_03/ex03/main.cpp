/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:13:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/04 18:24:51 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Perso1("Victor");
	DiamondTrap	Perso2("Jeanne");
	DiamondTrap	Perso3("Pierre");

	Perso1.attack("Alice");
	Perso1.whoAmI();
	Perso2.highFivesGuys();
	Perso3.takeDamage(20);
	Perso3.beRepaired(10);
	
	return (0);	
}
