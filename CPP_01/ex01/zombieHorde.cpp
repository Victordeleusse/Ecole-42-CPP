/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:19:50 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 17:05:09 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*horde = new Zombie[N];
	
	while (i < N)
	{
		horde[i].ft_set_name(name);
		i++;
	}
	return (horde);
}
