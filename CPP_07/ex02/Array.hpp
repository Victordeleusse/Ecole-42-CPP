/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:29:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/09 12:22:12 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template < typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		Array(const Array &myArray);
		~Array();
		
		Array	& operator=(const Array &myArray);
		T		& operator[](size_t i);
		const T	& operator[](size_t i) const;

		
		size_t	size() const;

		class outOfRangeIndexException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		} ;
		
	private :
		
		size_t	sizeData;
		T		*data;
};

template < typename T>
std::ostream& operator<<(std::ostream&, const Array<T> &myArray);

# include "Array.tpp"

#endif