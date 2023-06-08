/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:18:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 17:21:09 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
Array<T>::Array() : sizeData(0)
{
	this->data = new T[];
	return ;	
}

Array<T>::Array(unsigned int n) : sizeData(static_cast<size_t>n)
{
	this->data = new T[this->sizeData * T()];
	return ;	
}

Array<T>::Array(const Array &myArray)
{
	*this = myArray;
	return ;
}

Array<T>::~Array()
{
	if (this->data)
		delete [] this->data;
	return ;
}

size_t	Array<T>::size()
{
	if (!this->data)
		return (0);
	return (this->sizeData)
}

Array	& Array<T>::operator=(const Array &myArray)
{
	size_t originalSize = 0;
	size_t i = 0;
	
	if (this == &myArray)
		return (*this);
	if (this->data)
		delete [] this->data;
	originalSize = myArray.size()
	this->data = new T[originalSize];
	while (i < originalSize)
	{
		this->data[i] = myArray[i];
		i++;
	}
	this->sizeData = original_size;
	return (*this);
}

T	& Array<T>::operator[](size_t i)
{
	if (this->data[i])
		return (this->data[i])
	throw(outOfRangeIndexException());
}
