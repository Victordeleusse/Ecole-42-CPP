/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:36:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/12 18:26:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{	
	std::vector<int>			myvector;
	std::vector<int>::iterator	pos_myvector;
	std::list<int>				mylist (4,100);         // 4 ints with a value of 100
	std::list<int>::iterator	pos_mylist;
	int							i = 0;

	while (i < 10)
		myvector.push_back(i++);
	mylist.push_front (100);
	mylist.push_front (100);
	mylist.push_front (200);
	mylist.push_front (100);
  	mylist.push_front (300);
  	mylist.push_front (400);
	
	try
	{
		pos_myvector = easyFind(myvector, 2);
		std::cout << "Element : " << *pos_myvector << std::endl;
		pos_mylist = easyFind(mylist, 200);
		std::cout << "Element : " << *pos_mylist << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}