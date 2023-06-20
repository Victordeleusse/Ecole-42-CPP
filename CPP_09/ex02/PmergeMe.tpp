/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 18:30:47 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T, template <typename, typename = std::allocator<T> > class C>
PmergeMe<T, C>::PmergeMe(int argc, char **argv)
{
	if (argc < 2)
		throw(InputException1());
	
	this->isSorted = false;
	int				temp;
	int				i = 1;
	while (i < argc)
	{
		std::stringstream	ssl(argv[i]);
		ssl >> temp;
		if (ssl.fail())
			throw (InputException2());
		else if (temp < 0)
			throw (InputException2());
		this->container.push_back(static_cast<unsigned int>(temp));
		i++;
	}
	if (this->container.size() == 1)
	{	
		this->isSorted = true;
		return;
	}
	else if (this->container.size() % 2 == 1)
	{
		this->alone = this->container.back();
		this->container.pop_back();
	}
	return ;	
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
PmergeMe<T, C>::PmergeMe(const PmergeMe & myP) {
	this = *myP;
	return ;
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
PmergeMe<T, C>::~PmergeMe() {
	return ;
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
T	PmergeMe<T, C>::getAlone() const {
	return (this->alone);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<T>	PmergeMe<T, C>::getContainer() const {
	return (this->container);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<T>	PmergeMe<T, C>::getSortedContainer() const {
	return (this->sortedContainer);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<std::pair<T, T> , std::allocator<T> >	PmergeMe<T, C>::getPairsContainer() const {
	return (this->pairsContainer);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<std::pair<T, T> , std::allocator<T> >	PmergeMe<T, C>::getHalfSortedPairsContainer() const {
	return (this->pairsContainer);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
bool	PmergeMe<T, C>::getIsSorted() const {
	return (this->isSorted);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
PmergeMe<T, C>	&	PmergeMe<T, C>::operator=(const PmergeMe<T, C> & myP)
{
	if (this == &myP)
		return (*this);
	this->alone = myP.getAlone();
	this->container = myP.getContainer();
	this->pairsContainer = myP.getPairsContainer();
	this->isSorted = myP.getIsSorted();
	return (*this);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<std::pair<T, T> , std::allocator<T> >	PmergeMe<T, C>::mergePairsContainer(C<std::pair<T, T> > leftContainer, C<std::pair<T, T> > rightContainer)
{
	C<std::pair<T, T> , std::allocator<T> >	newPairContainer;
	
	while (leftContainer.size() && rightContainer.size())
	{
		if(leftContainer[0].first < rightContainer[0].first)
		{
			newPairContainer.push_back(leftContainer[0]);
			leftContainer.erase(leftContainer.begin());
		}
		else
		{
			newPairContainer.push_back(rightContainer[0]);
			rightContainer.erase(rightContainer.begin());
		}
	}
	while (leftContainer.size())
	{
		newPairContainer.push_back(leftContainer[0]);
		leftContainer.erase(leftContainer.begin());
	}
	while (rightContainer.size())
	{
		newPairContainer.push_back(rightContainer[0]);
		rightContainer.erase(rightContainer.begin());
	}
	return (newPairContainer);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
C<std::pair<T, T> , std::allocator<T> >	PmergeMe<T, C>::sortPairsContainer(C<std::pair<T, T> > myPairsContainer)
{
	if (myPairsContainer.size() == 1)
		return (myPairsContainer);
	C<std::pair<T, T> , std::allocator<T> >	leftContainer;
	std::copy(myPairsContainer.begin(), myPairsContainer.begin() + myPairsContainer.size()/2, std::back_inserter(leftContainer));
	C<std::pair<T, T> , std::allocator<T> >	rightContainer;
	std::copy(myPairsContainer.begin() + myPairsContainer.size()/2, myPairsContainer.end(), std::back_inserter(rightContainer));
	return (mergePairsContainer(sortPairsContainer(leftContainer), sortPairsContainer(rightContainer)));
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
void	PmergeMe<T, C>::mergeFirstFromPairs()
{
	for (typename C<std::pair<T, T> , std::allocator<T> >::iterator it = this->halfSortedPairsContainer.begin() ; it != halfSortedPairsContainer.end(); ++it)
		this->sortedContainer.push_back((*it).first);
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
void	PmergeMe<T, C>::mergeSecondFromPairs()
{
	unsigned int	temp;
	
	for (typename C<std::pair<T, T> , std::allocator<T> >::iterator it = this->halfSortedPairsContainer.begin() ; it != halfSortedPairsContainer.end(); ++it)
	{	
		temp = (*it).second;
		typename C<T>::iterator it2 = this->sortedContainer.begin();
		while (*it2 < temp)
			++it2;
		this->sortedContainer.insert(it2, temp);
	}	
}

template<typename T, template <typename, typename = std::allocator<T> > class C>
void	PmergeMe<T, C>::sort()
{
	// First and Second step of the Algorithm
	
	for(unsigned long j = 0; j < this->container.size(); j+=2)
	{
		if (container[j] > container[j + 1])
			this->pairsContainer.push_back(std::make_pair(this->container[j], this->container[j + 1]));
		else
			this->pairsContainer.push_back(std::make_pair(this->container[j + 1], this->container[j]));
	}

	// Third step of the Algorithm
	
	this->halfSortedPairsContainer = sortPairsContainer(this->pairsContainer);
	
	// Ending the third step
	
	mergeFirstFromPairs();
	
	// Fourth and fifth step
	
	mergeSecondFromPairs();
	// mergeAloneElement();
}