/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:01:44 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/23 15:52:46 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i = 0;
	int	buffer;
	
	std::cout << "How many zombies in your hord ? ";
	std::cin >> buffer;
	Zombie	*horde = zombieHorde(buffer, "Titouan");
	while (i < buffer)
	{
		horde[i].ft_anounce(i + 1);
		i++;
	}
	delete [] horde;
	return (0);
}