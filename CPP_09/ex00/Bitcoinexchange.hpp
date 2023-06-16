/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoinexchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:43:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 17:12:25 by vde-leus         ###   ########.fr       */
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

		btc(const std::string inputfile);
		btc(const btc &myBtc);
		~btc();

		btc	&	operator=(const btc & myBtc);

		std::string						getInputFile() const;
		std::string						getExchangeRateFile() const;
		std::map<std::string, float>	getExchangeData() const;

		bool	validateData(std::string file);
		bool	validateCalendar(std::string date);
		void	validateAmount(std::string amount, bool &validLine);
		bool	validateExchangeAmount(std::string amount);

		void	fileERMap();

		float	getExchangeRate(std::string date);
		void	displayValues();

		class FileException1 : public std::exception {
			public :
				virtual const char *what() const throw() {return("1. An error as occured when opening file");};		
		};

		class FileException2 : public std::exception {
			public :
				virtual const char *what() const throw() {return("2. An error as occured when opening .csv");};		
		};

		class FormatException : public std::exception {
			public :
				virtual const char *what() const throw() {return("Invalid format ! (please use format YYYY-MM-DD | amount)");};		
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
		

		const std::string				inputFile;
		std::string						exchangeRateFile;
		std::map<std::string, float> 	exchangeRate;
		
};


#endif