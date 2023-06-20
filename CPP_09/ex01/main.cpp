/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:04:46 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 20:11:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	rpn;

	if (argc != 2)
	{
		std::cerr
			<< "Usage: "
			<< argv[0]
			<< " <RPN expression>"
			<< std::endl;
	}
	else
	{
		try
		{
			rpn.reversePolishNotation(argv[1]);
			std::cout << rpn << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}