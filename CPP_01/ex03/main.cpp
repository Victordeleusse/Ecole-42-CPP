/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:04:03 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 10:41:35 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int	main(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanA	Bob = HumanA("Bob", club);

	Bob.attack();
	club.setType("some other type of club");
	Bob.attack();
	return (0);
}