/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:45:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 19:06:16 by vde-leus         ###   ########.fr       */
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

