/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:16:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 16:34:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <stack>
# include <sstream>

enum operation {
  ADDITION = 1,
  SOUSTRACTION,
  DIVISION,
  MULTIPLICATION
};

typedef struct s_data
{
	char		symbole;
	operation	ope;
} t_data;

class RPN
{
	public :
		RPN(std::string input);
		RPN(const RPN &myRPN);
		~RPN();

		RPN	&	operator=(const RPN &myRPN);

		std::stack<int>		getNumbersStack() const;
		std::stack<t_data>	getOperationsStack() const;

		bool	isValidNumber(char num);
		bool	isValidOperator(char ope);

		int		calcul();

		class InputException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Please enter an int (0 to 10) or an operator");};		
		};

		class ArgumentsException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Not enough arguments");};		
		};

		class ValidListException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Please enter a valid list of arguments");};		
		};

		class DivisionBy0Exception : public std::exception {
			public :
				virtual const char *what() const throw() {return("Error : Division by 0");};		
		};
		
	private :
		std::stack<int>		numbersStack;
		std::stack<t_data>	operationsStack;
		
	
};

#endif