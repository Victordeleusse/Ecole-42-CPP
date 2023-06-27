/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:06:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/27 17:42:06 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span< std::vector<int> >	mySpan(10050);
	std::vector<int>			myVector (10000, 50);	
	try
	{
		mySpan.addNumber(1);
		mySpan.addNumber(5);
		mySpan.addNumber(6);
		mySpan.addNumber(12);
		mySpan.addNumber(21);
		mySpan.addNumber(31);
		mySpan.addNumber(200);
		mySpan.addRanges(myVector);
		std::cout << mySpan;
	}
	catch(const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << mySpan.shortestSpan() << std::endl;
	std::cout << mySpan.longestSpan() << std::endl;
	return (0);
}