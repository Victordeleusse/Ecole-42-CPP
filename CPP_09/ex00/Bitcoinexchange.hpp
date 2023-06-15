/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoinexchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:43:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/15 19:04:28 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

# include <iostream>
# include <map>
# include <string>
# include <cstring>
# include <fstream>
# include <ios>
# include <sstream>

class btc
{
	public :

		btc();
		btc(const btc &myBtc);
		~btc();

		btc	&	operator=(const btc & myBtc);

		std::string						getInputFile() const;
		std::map<std::string, float>	getData() const;

		bool	validateData();
		bool	validateCalendar(std::string date);
		bool	validateAmount(std::string amount);
		void	fileDataMap();
		// void	fileERMap();

		class FileException : public std::exception {
			public :
				virtual const char *what() const throw() {return("An error as occured when opening file");};		
		};
		
		class DateException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Unvalid date ! (please use format YYYY-MM-DD)");};		
		};

		class AmountException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Unvalid amount ! (please enter an amount between 0 and 1000)");};		
		};
		
	private :

		std::string						inputFile;
		std::map<std::string, float> 	data;
		// std::map<std::string, float> 	exchangeRate;
		
};


#endif