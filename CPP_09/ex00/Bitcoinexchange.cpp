/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoinexchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:43:12 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 17:13:22 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoinexchange.hpp"

btc::btc(const std::string inputfile) : inputFile(inputfile) {
	
	this->exchangeRateFile = "data.txt";
	std::ofstream outfile (this->exchangeRateFile.c_str());
	
	std::fstream fin;
	fin.open("data.csv", std::ios::in);
	
	if (fin.is_open() && outfile.is_open())
	{
		std::string line;
		std::string date;
		std::string amount;
		while (std::getline(fin, line))
		{
			std::string::size_type pos = line.find(',');
			if (pos == std::string::npos)
				throw(FormatException());	
			date = line.substr(0, pos);
			outfile << date;
			outfile << " | ";
			amount = line.substr(pos + 1, line.size());
			outfile << amount << std::endl;
		}
		outfile.close();
	}
	else 
		throw(FileException2());	
	return ;
}

btc::btc(const btc &myBtc) {
	*this = myBtc;
}

btc::~btc() {
	return ;
}

std::string	btc::getInputFile(void) const {
	return (this->inputFile);
}

std::string	btc::getExchangeRateFile(void) const {
	return (this->exchangeRateFile);
}

std::map<std::string, float>	btc::getExchangeData() const {
	return (this->exchangeRate);
}

btc	& btc::operator=(const btc &myBtc)
{
	if (this == &myBtc)
		return (*this);
	this->exchangeRate = myBtc.getExchangeData();
	return (*this);
}

bool	btc::validateData(std::string file)
{
	bool			firstLine = true;
	std::ifstream	newfile(file.c_str());
	
	if (newfile.is_open())
	{
		std::string tp;
		while (std::getline(newfile, tp))
		{
			if (firstLine == false)
			{
				std::string date;
				std::string amount;
				std::string::size_type pos = tp.find('|');
				if (pos == std::string::npos)
					throw(FormatException());	
				date = tp.substr(0, pos);
				amount = tp.substr(pos + 1, tp.size() - pos);
				if (validateCalendar(date) == false)
					throw(DateException());
				if (validateExchangeAmount(amount) ==  false)
					throw(AmountException());
			}
			else
				firstLine = false;
		}
		newfile.close();
		return (true);
	}
	else 
		throw(FileException1());	
}

bool	btc::validateCalendar(std::string date)
{
	std::string	year;
	int			yearI;
	std::string	month;
	int			monthI;
	std::string	day;
	int			dayI;
	
	std::string::size_type pos1 = date.find('-');
	if (pos1 == std::string::npos)
		return (false);	
			
	year = date.substr(0, pos1);
	std::stringstream	ssY(year);
	ssY >> yearI;
	if (ssY.fail())
		return(false) ;
	if (yearI < 2000 || yearI > 2500)
		return (false);			
	
	std::string::size_type	pos2 = date.substr(year.size(), date.size() - year.size()).find('-');
	if (pos2 == std::string::npos)
		return (false);
			
	month = date.substr(pos1 + 1, pos2 - pos1);
	std::stringstream	ssM(month);
	ssM >> monthI;
	if (ssM.fail())
		return(false) ;
	if (monthI < 0 || monthI > 12)
		return (false);	
	
	day = date.substr(pos2 + 1, date.size() - pos2);
	std::stringstream	ssD(day);
	ssD >> dayI;
	if (ssD.fail())
		return(false) ;
	if (dayI < 0 || dayI > 31)
		return (false);		
	return (true);
}

void	btc::validateAmount(std::string amount, bool &validLine)
{
	std::stringstream	ss(amount);
	float				amountF;
	
	ss >> amountF;
	if (ss.fail())
	{	
		std::cout << "Error : Wrong amount type" << std::endl;
		validLine = false;
		return;
	}
	if (amountF < 0)
	{	
		std::cout << "Error : not a positive number" << std::endl;
		validLine = false;
	}
	else if (amountF > 1000)
	{
		std::cout << "Error : amount too large" << std::endl;
		validLine = false;
	}
}

bool	btc::validateExchangeAmount(std::string amount)
{
	std::stringstream	ss(amount);
	float				amountF;
	
	ss >> amountF;
	if (ss.fail())
		return(false) ;
	ss.clear();
	ss.seekg(0);
	return (true);
}

void	btc::fileERMap()
{
	bool			firstLine = true;
	std::ifstream	newfile(this->exchangeRateFile.c_str());
	
	if (newfile.is_open())
	{ 
		std::string tp;
		while (std::getline(newfile, tp))
		{
			if (firstLine == true)
				firstLine = false;
			else
			{
				std::string date;
				std::string amount;
				float		amountF;
				int	pos = tp.find('|');
				date = tp.substr(0, pos);
				amount = tp.substr(pos + 1, tp.size() - pos);
				std::stringstream	ss(amount);
				ss >> amountF;
				this->exchangeRate[date] = amountF;
			}
		}
		newfile.close();
	}
	else 
		throw(FileException1());	
}

void	btc::displayValues()
{
	bool			firstLine = true;
	bool			validLine = true;
	std::string		file = this->getInputFile();
	std::ifstream	newfile(file.c_str());
	
	if (this->validateData(this->getExchangeRateFile()))
			this->fileERMap();
	if (newfile.is_open())
	{
		std::string tp;
		while (std::getline(newfile, tp))
		{
			if (firstLine == false)
			{
				std::string date;
				std::string::size_type pos = tp.find('|');
				if (pos == std::string::npos)
					std::cout << "Error : Wrong input format : YYYY-MM-DD | amount -> " << tp << std::endl;
				else
				{
					date = tp.substr(0, pos);
					if (validateCalendar(date) == true)
					{
						float exchangeRate = getExchangeRate(date);
						std::string amount;
						float		amountF;
						amount = tp.substr(pos + 1, tp.size() - pos);
						validateAmount(amount, validLine);
						if (validLine == true)
						{
							std::stringstream	ss(amount);
							ss >> amountF;
							std::cout << date << " -> " << amountF * exchangeRate << std::endl;
						}
						validLine = true;
					}
					else
						std::cout << "Error : Wrong date format : " << date << std::endl;
				}
			}
			else 
				firstLine = false;
		}
	}
	
}

float	btc::getExchangeRate(std::string date)
{
	std::map<std::string ,float>::iterator itlow = this->exchangeRate.lower_bound(date);
	if (itlow == this->exchangeRate.end())
		itlow--;
	return (itlow->second);
}
