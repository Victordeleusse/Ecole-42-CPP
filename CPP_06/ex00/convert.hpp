/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:57:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/27 15:40:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <limits>
# include <stdbool.h>
# include <cmath>
# include <sstream>

enum scalaireT {
  NONE,
  CHAR,
  INT,
  DOUBLE,
  FLOAT,
  PSEUDO_LITTERAL
}; 

class ScalarConverter
{
	public :
		
		ScalarConverter(char *myInput);
		ScalarConverter(const ScalarConverter &myScalar);
		~ScalarConverter();

		ScalarConverter	&	operator=(const ScalarConverter &myScalar);
		
		operator char() const;
		operator int() const;
		operator float() const;
		operator double() const;

		bool	isValid();
		void	testLimits();
		void	convert();

		std::string	input;
		scalaireT	type;
		
		bool		dataValid;
		
		bool		isChar;
		bool		isPrintable;
		char		cRepresentation;
		
		bool		isInt;
		int			intRepresentation;
		
		bool		isFloat;
		float		floatRepresentation;
		
		bool		isDouble;
		bool		hasPoint;
		double		doubleRepresentation;
		
};

std::ostream	&	operator<<(std::ostream &o, const ScalarConverter &myScalar);

#endif