/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:51:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 17:50:49 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Triangle.hpp"

int	main(void)
{
	Triangle* Test1 = new Triangle("Ulysse", 2, 3);
	Shape *a = Test1;
	
	Triangle Test("triangle", 1 , 10);
	std::cout << "Aire du triangle : " << Test.area() << std::endl;
	std::cout << "Color : " << Test.color << std::endl; 
	std::cout << "Color Ulysse: " << (*a).area() << std::endl;
	delete Test1;
	return (0);
}