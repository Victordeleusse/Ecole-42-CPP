/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:25:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 15:14:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	size_t	i = 0;
	int 	tab[5] = {1, 2, 3, 4, 5};
	size_t	size = sizeof(tab) / sizeof(tab[0]);
	
	iter<int, void>(tab, size, &(ft_double));
	while (i < size)
		ft_print(tab[i++]);
	return (0);
}