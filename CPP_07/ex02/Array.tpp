/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:09:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/09 09:25:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
Array<T>::Array() : sizeData(0)
{
	this->data = new T[0];
	return ;	
}

template < typename T >
Array<T>::Array(unsigned int n) : sizeData(n)
{
	this->data = new T[this->sizeData * T()];
	return ;	
}

template < typename T >
Array<T>::Array(const Array<T> &myArray)
{
	*this = myArray;
	return ;
}

template < typename T >
Array<T>::~Array()
{
	if (this->data)
		delete [] this->data;
	return ;
}

template < typename T >
unsigned int	Array<T>::size() const
{
	if (!this->data)
		return (0);
	return (this->sizeData)
}

template < typename T >
Array<T>	& Array<T>::operator=(const Array<T> &myArray)
{
	size_t originalSize = 0;
	size_t i = 0;
	
	if (this == &myArray)
		return (*this);
	if (this->data)
		delete [] this->data;
	originalSize = myArray.size();
	this->data = new T[originalSize];
	while (i < originalSize)
	{
		this->data[i] = myArray[i];
		i++;
	}
	this->sizeData = original_size;
	return (*this);
}

template < typename T >
T	& Array<T>::operator[](size_t i)
{
	if (this->data[i])
		return (this->data[i]);
	throw(outOfRangeIndexException());
}

template < typename T >
std::ostream& operator<<(std::ostream &out, const Array<T> &myArray)
{
	unsigned int	i = 0;
	
	if (!myArray.data || !myArray.sizeData)
		out << "Empty array" << std::endl;
	else
	{
		while (i < myArray.sizeData)
		{
			out << myArray.data[i] << std::endl;
			i++;
		}
	}
	return (out);
}

