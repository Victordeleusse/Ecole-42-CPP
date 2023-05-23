/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:36:27 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 17:43:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_H
# define TRIANGLE_H

# include "Shape.hpp"

class Triangle : public Shape
{
	public :
	
		Triangle();
		Triangle(std::string name, int base, int height);
		~Triangle();

		int area();
		
		std::string name;
		int			base;
		int			height;	
};

#endif