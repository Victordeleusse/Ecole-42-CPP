/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:16:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/20 20:15:01 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <stack>
# include <sstream>
# include <string>
# include <stdlib.h> 

class RPN
{
	public:
		RPN(void);
		RPN(const RPN& obj);
		virtual ~RPN(void);

		RPN&	operator=(const RPN& obj);

		void	reversePolishNotation(const std::string &expr);
		bool	isOperator(char c);
		void	calculate(int num1, int num2, char op);

		int		getResult(void) const;

		class insufficientOperands : public std::exception {
			public:
				virtual const char* what() const throw() { return ("[Error]: insufficient operands"); } };

		class invalidToken : public std::exception {
			public:
				virtual const char* what() const throw() { return ("[Error]: invalid token"); } };

		class tooManyOperands : public std::exception { 
			public:
				virtual const char* what() const throw() { return ("[Error]: too many operands"); } };

		class divisionByZero : public std::exception {
			public:
				virtual const char* what() const throw() { return ("[Error]: division by zero"); } };
	
	private:
		std::stack<int> _stack;
		int				_result;
};

std::ostream&	operator<<(std::ostream& o, const RPN& i);

#endif