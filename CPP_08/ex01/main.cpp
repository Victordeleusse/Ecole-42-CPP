/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:06:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/12 20:36:40 by vde-leus         ###   ########.fr       */
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
		std::cout << mySpan;
	}
	catch(const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}