/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:45:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 10:31:37 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	return ;
}

Point::Point(const float new_x, const float new_y) : x(new_x), y(new_y)
{
	return ;
}

Point::Point(const Point &myPoint) : x(myPoint.x), y(myPoint.y) 
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point	&	Point::operator=(const Point &myPoint)
{
	if (this != &myPoint)
	{	
		(Fixed)this->x = myPoint.get_x();
		(Fixed)this->y = myPoint.get_y();
	}
	return (*this);
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void) const
{
	return (this->y);
}
