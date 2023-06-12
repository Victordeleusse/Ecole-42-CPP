/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:37:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/12 20:36:52 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
Span<T>::Span(unsigned int N) : sizeN(N), nbElem(0)
{
	this->data = T(sizeN);
	return ;
}

template <typename T>
Span<T>::Span(const Span &mySpan) : sizeN(0), nbElem(0)
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
		return;
	this->nb_elem = mySpan.getNbElem();
	this->sizeN = mySpan.getSize();
	this->data = mySpan.getData();
	return (*this);
}

template <typename T>
const int	&	Span<T>::operator[](int	i) const
{
	if (i >= this->sizeN)
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
int	Span<T>::getNbElem() const
{
	return (this->nbElem);
}

template <typename T>
void	Span<T>::addNumber(int myNumber)
{
	if (this->nbElem == this->sizeN)
		throw(SizeException());
	this->data.push_back(myNumber);
	this->nbElem++;
}

template <typename T>
std::ostream& operator<<(std::ostream &out, const Span<T> &mySpan)
{
	int	i = 0;
	int	nbElem = mySpan.getNbElem();
	while (i < nbElem)
		out << mySpan[i++];
	return (out);
}
