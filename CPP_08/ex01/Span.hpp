/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:37:44 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/13 15:56:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <limits>
# include <ranges>

template <typename T>
class Span
{
	public :

		Span(unsigned int N);
		Span(const Span &mySpan);
		~Span();
		
		const Span & operator=(const Span &mySpan);
		const int & operator[](int i) const;
		
		void			addNumber(int myNumber);
		void			addRanges(T myRange);
		unsigned int	getSize() const;
		T				getData() const;

		int	shortestSpan() const;
		int	longestSpan() const;

		class SizeException : public std::exception
		{
			public :
				virtual const char *what() const throw() {return("The container is full !");};		
		};

		class OutOfRangeException : public std::exception
		{
			public :
				virtual const char *what() const throw() {return("Index out of range of the container");};		
		};
		
		class SortSizeException : public std::exception
		{
			public :
				virtual const char *what() const throw() {return("Not enough element to calculate such distance");};		
		};
	
	private :
		
		Span();
		
		unsigned int	sizeN;
		T	data;

};

template < typename T>
std::ostream& operator<<(std::ostream &out, const Span<T> &mySpan);

# include "Span.cpp"

#endif