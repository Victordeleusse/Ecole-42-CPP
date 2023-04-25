/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:36:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 15:06:51 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl 		test;
	std::string	buffer_complain;

	std::cout << "Please, enter Harl's level complain \n -debug \n -info \n -warning \n -error \n" << std::endl;
	std::cout << "Harl's complain : ";
	std::cin >> buffer_complain;
	test.complain(buffer_complain);
	return (0);
}
