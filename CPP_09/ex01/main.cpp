/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:04:46 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/18 14:57:53 by vde-leus         ###   ########.fr       */
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
	try
	{
		RPN	myRPN(argv[1]);
		// std::stack<int>		numbersStack = myRPN.getNumbersStack();
		// while(!numbersStack.empty()) 
		// {
		// 	std::cout << numbersStack.top() << std::endl;
		// 	numbersStack.pop();
		// }
		// std::stack<t_data>	operationsStack = myRPN.getOperationsStack();
		// while(!operationsStack.empty()) 
		// {
		// 	std::cout << operationsStack.top().symbole << std::endl;
		// 	operationsStack.pop();
		// }
		std::cout << myRPN.calcul() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}