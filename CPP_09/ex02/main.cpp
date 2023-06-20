/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:30:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 18:13:54 by vde-leus         ###   ########.fr       */
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
		
		std::cout << "Sorted Pairs : ";
		myP.sort();
		std::vector<std::pair<unsigned int, unsigned int> , std::allocator<unsigned int> >	myHalfSortedPairsVector = myP.getHalfSortedPairsContainer();
		for (std::vector<std::pair<unsigned int, unsigned int> , std::allocator<unsigned int> >::iterator it = myHalfSortedPairsVector.begin() ; it != myHalfSortedPairsVector.end(); ++it)
		{
			std::cout << "{" << (*it).first << " , " << (*it).second << "}  ";
		}
		std::cout << '\n';
		std::vector<unsigned int>			myvectorSorted = myP.getSortedContainer();
		std::cout << "Sorted Vector : ";
		for (std::vector<unsigned int>::iterator it2 = myvectorSorted.begin() ; it2 != myvectorSorted.end(); ++it2)
    		std::cout << ' ' << *it2;
  		std::cout << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
