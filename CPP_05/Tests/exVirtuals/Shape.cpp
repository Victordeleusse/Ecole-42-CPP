/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:39:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 17:24:37 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shape.hpp"

Shape::Shape()
{
	std::cout << "Shape constructor \n";
	this->color = "Rouge";
	this->number = 10;
	return ;
}

Shape::~Shape()
{
	std::cout << "Shape destructor \n";
	return ;	
}
