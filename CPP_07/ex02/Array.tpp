/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:09:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/09 12:26:12 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
Array<T>::Array() : sizeData(0)
{
	this->data = new T[0];
	return ;	
}

template < typename T >
Array<T>::Array(unsigned int n)
{
	if (static_cast<int>(n) < 0)
		throw(outOfRangeIndexException());
	else 
	{
		this->sizeData = n;
		this->data = new T[n];
	}	
	return ;	
}

template < typename T >
Array<T>::Array(const Array<T> &myArray): sizeData(0)
{
	this->data = new T[0];
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
size_t	Array<T>::size() const
{
	if (!this->data)
		return (0);
	return (this->sizeData);
}

template < typename T >
T	& Array<T>::operator[](size_t i)
{
	if (this->data && i < this->sizeData)
		return (this->data[i]);
	throw(outOfRangeIndexException());
}

template < typename T >
const T	& Array<T>::operator[](size_t i) const
{
	if (this->data && i < this->sizeData)
		return (this->data[i]);
	throw(outOfRangeIndexException());
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
	this->sizeData = originalSize;
	return (*this);
}

template < typename T >
const char *Array<T>::outOfRangeIndexException::what(void) const throw()
{
	return ("Index out of range");
}

template < typename T >
std::ostream& operator<<(std::ostream &out, const Array<T> &myArray)
{
	unsigned int	i = 0;
	unsigned int	size = myArray.size();
	
	if (!size)
		out << "Empty array" << std::endl;
	else
	{
		while (i < size)
			out << myArray[i++] << " ";
	}
	return (out);
}

