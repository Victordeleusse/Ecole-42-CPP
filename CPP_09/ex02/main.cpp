/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:30:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 18:45:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		PmergeMe<unsigned int, std::vector> myP(argc, argv);
		std::vector<unsigned int>			myvector = myP.getContainer();

		std::cout << "myvector contains : ";
  		for (std::vector<unsigned int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    		std::cout << ' ' << *it;
  		std::cout << '\n';
		
		myP.sort();
		
		// std::cout << "Sorted Pairs : ";
		// std::vector<std::pair<unsigned int, unsigned int> , std::allocator<unsigned int> >	myHalfSortedPairsVector = myP.getHalfSortedPairsContainer();
		// for (std::vector<std::pair<unsigned int, unsigned int> , std::allocator<unsigned int> >::iterator it = myHalfSortedPairsVector.begin() ; it != myHalfSortedPairsVector.end(); ++it)
		// {
		// 	std::cout << "{" << (*it).first << " , " << (*it).second << "}  ";
		// }
		std::vector<unsigned int>			myvectorSorted = myP.getSortedContainer();
		std::cout << "Sorted Vector : ";
		for (std::vector<unsigned int>::iterator it2 = myvectorSorted.begin() ; it2 != myvectorSorted.end(); ++it2)
    		std::cout << ' ' << *it2;


  		std::cout << '\n';
  		std::cout << '\n';


		PmergeMe<unsigned int, std::deque> myD(argc, argv);
		std::deque<unsigned int>			mydeque = myD.getContainer();

		std::cout << "mydeque contains : ";
  		for (std::deque<unsigned int>::iterator it3 = mydeque.begin() ; it3 != mydeque.end(); ++it3)
    		std::cout << ' ' << *it3;
  		std::cout << '\n';
		
		myD.sort();
		std::deque<unsigned int>			mydequeSorted = myD.getSortedContainer();
		std::cout << "Sorted deque : ";
		for (std::deque<unsigned int>::iterator it4 = mydequeSorted.begin() ; it4 != mydequeSorted.end(); ++it4)
    		std::cout << ' ' << *it4;
  		std::cout << '\n';
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
