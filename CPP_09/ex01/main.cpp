/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:04:46 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 18:33:43 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Please enter a single valid inverted Polish mathematical expression." << std::endl;
		return (1);
	}
	RPN	myRPN(argv[1]);
	return (0);
}