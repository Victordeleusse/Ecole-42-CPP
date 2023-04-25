/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:37:56 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 15:49:08 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl Test;
	
	if (argc != 2)
	{
		std::cout << "Please use it as :  ./HarlFilter ARGUMENT" << std::endl;
		return (1);
	}
	Test.complain(argv[1]);
	return (0);
}