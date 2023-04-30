/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:15:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 17:02:19 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(5.05f);
	Fixed const b( a + Fixed( 2 ) );

	Fixed c;
	c = a + b;

	std::cout << "valeur de b : " << b << std::endl;
	std::cout << "valeur de a : " << a << std::endl;

	std::cout << "valeur de ++a : " << ++a << std::endl;
	std::cout << "valeur de c++ : " << c++ << std::endl;

	return (0);
}
