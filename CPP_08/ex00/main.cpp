/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:36:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/10 16:20:43 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	myvector;
	std::list<int>		mylist (4,100);         // 4 ints with a value of 100
  	mylist.push_front (200);
  	mylist.push_front (300);
	
  	for (int i=1; i<=5; i++) myvector.push_back(i);
	try
	{
		easyFind(myvector, 3);
		easyFind(mylist, 200);	
	}
	catch(const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}