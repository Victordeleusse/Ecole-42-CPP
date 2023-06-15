/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoinexchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:43:12 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/15 18:56:47 by vde-leus         ###   ########.fr       */
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
	std::fstream	newfile;
	
	newfile.open(this->inputFile, std::ios::in);
	if (newfile.is_open())
	{ 
		std::string tp;
		while (getline(newfile, tp))
		{
			std::string date;
			std::string amount;
			int	pos = tp.find('|');
			date = tp.substr(0, pos);
			amount = tp.substr(pos + 1, tp.size() - pos);
			if (validateCalendar(date) == false)
				throw(DateException());
			if (validateAmount(amount) ==  false)
				throw(AmountException());
		}
		newfile.close();
		return (true);
	}
	else 
		throw(FileException());	
}

bool	btc::validateCalendar(std::string date)
{
	std::string	year;
	std::string	month;
	std::string	day;
	int			pos1 = 0;
	
	pos1 = date.find('-');
	if (pos1 == std::string::npos)
		return (false);		
	year = date.substr(0, pos1);
	if (year.size() != 4)
		return (false);
	if (stoi(year) < 2000 || stoi(year) > 2500)
		return (false);			
	int	pos2 = date.substr(year.size(), date.size() - year.size()).find('-');
	if (pos2 == std::string::npos)
		return (false);		
	month = date.substr(pos1 + 1, pos2 - pos1);
	day = date.substr(pos2 + 1, date.size() - pos2);
	if (month.size() != 2)
		return (false);
	if (stoi(month) < 0 || stoi(month) > 12)
		return (false);	
	if (day.size() != 2)
		return (false);
	if (stoi(day) < 0 || stoi(day) > 12)
		return (false);	
	return (true);
}

bool	btc::validateAmount(std::string amount)
{
	std::stringstream	ss(amount);
	float				amountE;
	
	ss >> amountE;
	if (ss.fail())
		return(false) ;
	ss.clear();
	ss.seekg(0);

	if (amountE < 0 || amountE > 1000)
		return (false);
	return (true);
}

void	btc::fileDataMap()
{
	std::fstream	newfile;
	
	newfile.open(this->inputFile, std::ios::in);
	if (newfile.is_open())
	{ 
		std::string tp;
		while (getline(newfile, tp))
		{
			std::string date;
			std::string amount;
			int	pos = tp.find('|');
			date = tp.substr(0, pos);
			amount = tp.substr(pos + 1, tp.size() - pos);
			this->data[date] = stof(amount);
		}
		newfile.close();
	}
	else 
		throw(FileException());	
}