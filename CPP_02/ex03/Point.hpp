/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:33:30 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 19:13:57 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{

	public :

		Point(void);
		Point(const float x, const float y);
		Point(const Point &myPoint);
		~Point(void);	
	
		Point	&	operator=(const Point &myPoint);

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;

	
	private :

		const Fixed	x;
		const Fixed y;	
}



#endif