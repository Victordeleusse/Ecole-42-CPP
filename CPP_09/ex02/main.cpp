/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:30:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/28 14:08:53 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		///////////// VECTOR
		
		PmergeMe<unsigned int, std::vector> myP(argc, argv);
		std::vector<unsigned int>			myvector = myP.getContainer();

		std::cout << "myvector contains : ";
  		for (std::vector<unsigned int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    		std::cout << ' ' << *it;
  		std::cout << '\n';
		
		struct timeval begin, end;
    	gettimeofday(&begin, 0);
		myP.sort();
		gettimeofday(&end, 0);
    	long seconds = end.tv_sec - begin.tv_sec;
   		long microseconds = end.tv_usec - begin.tv_usec;
    	double elapsed = seconds + microseconds*1e-6;
		
		std::vector<unsigned int>			myvectorSorted = myP.getSortedContainer();
		std::cout << "Sorted Vector : ";
		for (std::vector<unsigned int>::iterator it2 = myvectorSorted.begin() ; it2 != myvectorSorted.end(); ++it2)
    		std::cout << ' ' << *it2;
  		std::cout << '\n';
		std::cout << "TIME to sort " << argc - 1 << " elements with std::vector as my container : " << elapsed << "seconds." << std::endl;

  		std::cout << '\n';
  		std::cout << '\n';

		///////////// DEQUE
		
		PmergeMe<unsigned int, std::deque> myD(argc, argv);
		std::deque<unsigned int>			mydeque = myD.getContainer();

		std::cout << "mydeque contains : ";
  		for (std::deque<unsigned int>::iterator it3 = mydeque.begin() ; it3 != mydeque.end(); ++it3)
    		std::cout << ' ' << *it3;
  		std::cout << '\n';
		
		gettimeofday(&begin, 0);
		myD.sort();
		gettimeofday(&end, 0);
    	long seconds2 = end.tv_sec - begin.tv_sec;
   		long microseconds2 = end.tv_usec - begin.tv_usec;
    	double elapsed2 = seconds2 + microseconds2*1e-6;

		std::deque<unsigned int>			mydequeSorted = myD.getSortedContainer();
		std::cout << "Sorted deque : ";
		for (std::deque<unsigned int>::iterator it4 = mydequeSorted.begin() ; it4 != mydequeSorted.end(); ++it4)
    		std::cout << ' ' << *it4;
  		std::cout << '\n';
		std::cout << "TIME to sort " << argc - 1 << " elements with std::deque as my container : " << elapsed2 << "seconds." << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
