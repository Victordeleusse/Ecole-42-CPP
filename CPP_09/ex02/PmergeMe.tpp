/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/19 20:21:30 by vde-leus         ###   ########.fr       */
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
	for(unsigned long j = 0; j < this->container.size(); j+=2)
		this->pairsContainer.push_back(std::make_pair(container[j], container[j + 1]));
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
C<std::pair<T, T> >	PmergeMe<T, C>::getPairsContainer() const {
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