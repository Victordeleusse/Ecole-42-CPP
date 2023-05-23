/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:31:46 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 17:54:10 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_H
# define SHAPE_H

# include <iostream>

class Shape
{
	public :

		Shape();
		virtual ~Shape();

		virtual int area();
		
		std::string 		color;
		int					number;
		
};

#endif