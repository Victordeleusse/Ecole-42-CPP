/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:25:05 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 10:52:19 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	A(0.0, 0.0);
	Point	B(10.0, 30.0);
	Point	C(20.0, 0.0);
	Point	P(10.0, 15.0);
	
	if (bsp(A, B, C, P))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is out of the triangle" << std::endl;
	return (0);
}