/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:16:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 18:47:20 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <cmath>
# include <stack>
# include <stdio.h>
# include <string.h>

enum operation {
  ADDITION = 1,
  SOUSTRACTION,
  DIVISION,
  MULTIPLICATION
};

typedef struct s_data
{
	int			a;
	int			b;
	operation	ope;
} t_data;

class RPN
{
	public :
		RPN(std::string input);
		RPN(const RPN &myRPN);
		~RPN();

		RPN	&	operator=(const RPN &myRPN);

		std::stack<int>		getNumbers() const;
		std::stack<char>	getOperations() const;

		class IntegerException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Please enter an int between 0 ()");};		
		};

	private :
		std::stack<int>		numbersStack;
		std::stack<char>	operationsStack;
		
	
};

#endif