/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:17:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 15:31:16 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Perso1("Victor");
	ClapTrap	Perso2("Titouan");
	ClapTrap	Perso3(Perso2);
	
	Perso1.attack("Alice");
	Perso3.beRepaired(1);
	Perso2.takeDamage(12);
	return (0);
}