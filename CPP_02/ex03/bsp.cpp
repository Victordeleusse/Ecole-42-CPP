/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:33:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 11:17:38 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ft_TriangleArea(const Point a, const Point b, const Point c)
{
	Fixed	sum_1;
	Fixed	sum_2;
	Fixed	sum_3;
	Fixed	sum;

	sum_1 = a.get_x() * (b.get_y() - c.get_y());
	sum_2 = b.get_x() * (c.get_y() - a.get_y());
	sum_1 = c.get_x() * (a.get_y() - b.get_y());
	sum = (sum_1 + sum_2 + sum_3);
	if (sum > 0)
		return (sum / 2);
	return ((sum * -1) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area_init = ft_TriangleArea(a, b, c);
	Fixed	area_part_1 = ft_TriangleArea(a, b, point);
	Fixed	area_part_2 = ft_TriangleArea(a, c, point);
	Fixed	area_part_3 = ft_TriangleArea(c, b, point);
	Fixed	sum_area_part = area_part_1 + area_part_2 + area_part_3;

	// std::cout << "Aire init : " << area_init << std::endl;
	// std::cout << "Aire 1 : " << area_part_1 << std::endl;
	// std::cout << "Aire 2 : " << area_part_2 << std::endl;
	// std::cout << "Aire 3 : " << area_part_3 << std::endl;
	if (area_init != sum_area_part)
		return (false);
	return (true);
}
