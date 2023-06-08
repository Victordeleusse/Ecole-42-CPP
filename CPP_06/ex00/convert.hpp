/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:57:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 11:46:02 by vde-leus         ###   ########.fr       */
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

typedef struct	s_data {
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
}	t_data;

class ScalarConverter
{
	private :
	
		ScalarConverter();
		ScalarConverter(const ScalarConverter &myScalar);
		ScalarConverter	&	operator=(const ScalarConverter &myScalar);
		~ScalarConverter();
	
		static bool	isValid(t_data *data);
		static void	testLimits(t_data *data);
		static void	printRes(t_data *data);
	
		class	WrongInputException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	
		static t_data	data;
		
	public :

		static void	convert(char *myInput);
};

#endif