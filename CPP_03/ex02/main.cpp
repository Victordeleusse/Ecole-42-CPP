/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:46:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/04 12:27:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Perso1("Victor");
	ScavTrap	Perso2("Titouan");
	FragTrap	Perso3("Jeanne");

	Perso1.attack("Alice");
	Perso2.takeDamage(10);
	Perso2.attack("Jean");
	Perso3.attack("Claire");
	Perso3.highFivesGuys();
	return (0);	
}