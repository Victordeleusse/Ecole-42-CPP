/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoinexchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:43:12 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/15 20:28:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoinexchange.hpp"

btc::btc() : inputFile("myData.txt") {
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

std::map<std::string, float>	btc::getData() const {
	return (this->data);
}

btc	& btc::operator=(const btc &myBtc)
{
	if (this == &myBtc)
		return (*this);
	this->inputFile = myBtc.getInputFile();
	this->data = myBtc.getData();
	return (*this);
}

bool	btc::validateData()
{
	bool			firstLine = true;
	std::ifstream	newfile(this->inputFile.c_str());
	
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
				if (validateAmount(amount) ==  false)
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
	int			pos1 = 0;
	
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

bool	btc::validateAmount(std::string amount)
{
	std::stringstream	ss(amount);
	float				amountF;
	
	ss >> amountF;
	if (ss.fail())
		return(false) ;
	ss.clear();
	ss.seekg(0);

	if (amountF < 0 || amountF > 1000)
		return (false);
	return (true);
}

void	btc::fileDataMap()
{
	std::ifstream	newfile(this->inputFile.c_str());
	
	if (newfile.is_open())
	{ 
		std::string tp;
		while (std::getline(newfile, tp))
		{
			std::string date;
			std::string amount;
			float		amountF;
			int	pos = tp.find('|');
			date = tp.substr(0, pos);
			amount = tp.substr(pos + 1, tp.size() - pos);
			std::stringstream	ss(amount);
			ss >> amountF;
			if (ss.fail())
				throw(AmountException());
			ss.clear();
			ss.seekg(0);
			this->data[date] = amountF;
		}
		newfile.close();
	}
	else 
		throw(FileException1());	
}