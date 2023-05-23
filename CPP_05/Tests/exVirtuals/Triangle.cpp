/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:44:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 17:24:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Triangle.hpp"

Triangle::Triangle(std::string myName, int myBase, int myHeight): name(myName), base(myBase), height(myHeight)
{
	std::cout << "Triangle constructor \n";
	this->color = Shape::color;
	return ;
}

Triangle::~Triangle()
{
	std::cout << "Triangle destructor \n";
	return ;
}

int	Triangle::area()
{
	return(this->base * this->height);
}
