/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:42:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 16:30:17 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

# include <iostream>
# include <vector>
# include <deque>
# include <utility> 
# include <algorithm>
# include <sstream>

template<typename T, template <typename, typename = std::allocator<T> > class C>
class PmergeMe
{
	public :
		
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe & myP);
		~PmergeMe();
		
		PmergeMe	&	operator=(const PmergeMe & myP);

		T					getAlone() const;
		C<T>				getContainer() const;
		C<std::pair<T, T> >	getPairsContainer() const;
		C<std::pair<T, T> >	getHalfSortedPairsContainer() const;
		bool				getIsSorted() const;

		void					sort();
		C<std::pair<T, T> >	&	sortPairsContainer(C<std::pair<T, T> > &myPairsContainer);
		C<std::pair<T, T> >	&	mergePairsContainer(C<std::pair<T, T> > &leftContainer, C<std::pair<T, T> > &rightContainer);
		void					insertionRemainingElements(C<std::pair<T, T> > &myPairsContainer);

		class InputException1 : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Please enter a sortable array of numbers");};		
		};

		class InputException2 : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Invalid parameter");};		
		};

	private :
		
		T						alone;
		C<T>					container;
		C<T>					sortedContainer;
		C<std::pair<T, T> >		pairsContainer;
		C<std::pair<T, T> >		halfSortedPairsContainer;
		bool	isSorted;
};

# include "PmergeMe.tpp"

#endif