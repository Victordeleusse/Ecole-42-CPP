/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:06:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/13 11:52:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span< std::vector<int> >	mySpan(10);
	
	try
	{
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
		mySpan.addNumber(1);
	}
	catch(const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << mySpan;
	return (0);
}