/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:30:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 16:33:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		PmergeMe<unsigned int, std::vector> myP(argc, argv);
		std::vector<unsigned int>			myvector = myP.getContainer();

		std::cout << "myvector contains:";
  		for (std::vector<unsigned int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    		std::cout << ' ' << *it;
  		std::cout << '\n';
		
		std::cout << "Sorted Pairs" << std::endl;
		myP.sort();
		std::vector<std::pair<unsigned int, unsigned int> , std::allocator<unsigned int> >	myHalfSortedPairsVector = myP.getHalfSortedPairsContainer();
		
		for (std::vector<unsigned int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    		std::cout << ' ' << *it;
  		std::cout << '\n';

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
