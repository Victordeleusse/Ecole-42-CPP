/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:50:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/07 16:48:15 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template < typename T >
void	swap(T *a, T *b)
{
	T	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

template < typename T >
const T &min(const T &a, const T &b)
{
	if (a > b)
		return (b);
	return (a);
}

template < typename T >
const T &max(const T &a, const T &b)
{
	if (a >= b)
		return (a);
	return (b);
}

#endif