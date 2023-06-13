/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:37:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/13 12:03:48 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
Span<T>::Span(unsigned int N) : sizeN(N)
{
	this->data = T(0);
	return ;
}

template <typename T>
Span<T>::Span(const Span &mySpan) : sizeN(0)
{
	*this = mySpan;
	return ;
}

template <typename T>
Span<T>::~Span()
{
	return ;
}

template <typename T>
const Span<T>	&	Span<T>::operator=(const Span<T> &mySpan)
{
	if (this == &mySpan)
		return (*this);
	this->sizeN = mySpan.getSize();
	this->data = mySpan.getData();
	return (*this);
}

template <typename T>
const int	&	Span<T>::operator[](int	i) const
{
	if (i >= (int)this->data.size())
		throw(OutOfRangeException());
	return (this->data[i]);
}

template <typename T>
int	Span<T>::getSize() const
{
	return (this->sizeN);
}

template <typename T>
T	Span<T>::getData() const
{
	return (this->data);
}

template <typename T>
void	Span<T>::addNumber(int myNumber)
{
	if ((int)this->data.size() == this->sizeN)
		throw(SizeException());
	this->data.push_back(myNumber);
}

template <typename T>
std::ostream& operator<<(std::ostream &out, const Span<T> &mySpan)
{
	const T myData = mySpan.getData();
	
	for (typename T::const_iterator it = myData.begin() ; it != myData.end(); ++it)
		out << *it << std::endl;
	return (out);
}
