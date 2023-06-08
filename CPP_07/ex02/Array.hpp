/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:29:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 16:54:11 by vde-leus         ###   ########.fr       */
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
		
		size_t	size();

		class outOfRangeIndexException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		} ;
		
	private :
		T		*data;
		size_t	sizeData;

};

#endif;