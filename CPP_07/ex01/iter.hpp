/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:58:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 15:14:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template < typename T>
void	ft_double(T &elem)
{
	elem = elem * 2;
}

template < typename T, typename U >
U	ft_decrement(T &a)
{
	a = static_cast<U>(a - 1);
	return (a);
}

template < typename T >
void	ft_print(T &elem)
{
	std::cout << elem << std::endl;	
}

template <typename T, typename U>  
void	iter(T *tab, size_t size, U (*function)(T &elem))
{
	size_t	i = 0;
	
	while (i < size)
	{
		(*function)(tab[i]);
		i++;
	}
}

#endif