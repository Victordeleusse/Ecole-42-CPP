/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:37:44 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/12 20:27:56 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
class Span
{
	public :

		Span(unsigned int N);
		Span(const Span &mySpan);
		~Span();
		
		const Span & operator=(const Span &mySpan);
		const int & operator[](int i) const;
		
		void	addNumber(int myNumber);
		int		getSize() const;
		int		getNbElem() const;
		T		getData() const;

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
	
	private :
		
		Span();
		
		int	sizeN;
		int	nbElem;
		T	data;

};

template < typename T>
std::ostream& operator<<(std::ostream &out, const Span<T> &mySpan);

# include "Span.cpp"

#endif