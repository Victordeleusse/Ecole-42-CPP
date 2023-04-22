/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:30:51 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 16:04:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Valentin is a random Zombie" << std::endl;
	std::cout << "What have you said ? " << std::endl;
	randomChump("Valentin");

	std::cout << "Gerard is also a random Zombie" << std::endl;
	randomChump("Gerard");

	std::cout << "Jean is more sophisticated Zombie" << std::endl;
	Zombie	*Jean = newZombie("Jean");
	std::cout << "Jean can you please introduce yourself ? " << std::endl;
	Jean->announce();
	std::cout << "Well not much more sophisticated i presume !" << std::endl;
	delete (Jean);
	
	return (0);
}