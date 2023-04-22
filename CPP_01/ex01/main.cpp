/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:01:44 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 17:13:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i = 0;
	Zombie	*horde = zombieHorde(42, "Titouan");

	while (i < 42)
	{
		horde[i].ft_anounce(i + 1);
		i++;
	}
	delete [] horde;
	return (0);
}