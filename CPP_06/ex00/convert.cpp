/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:55:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/26 20:09:08 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

ScalarConverter::ScalarConverter(char *myInput)
{
	std::string	s = myInput;
	this->input = s;
	this->dataValid = true;
	this->type = NONE;
	if (!this->isValid())
		return ;
	if (this->type == PSEUDO_LITTERAL)
		this->testLimits();
	else
		this->convert();
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &myScalar)
{
	*this = myScalar;
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

ScalarConverter	& ScalarConverter::operator=(const ScalarConverter &myScalar)
{
	if (this != &myScalar)
	{	
		this->input = myScalar.input;
		this->cRepresentation = myScalar.cRepresentation;
		this->intRepresentation = myScalar.intRepresentation;
		this->doubleRepresentation = myScalar.doubleRepresentation;
		this->floatRepresentation = myScalar.floatRepresentation;
	}
	return (*this) ;
}

bool	ScalarConverter::isValid()
{
	if (!input.compare("nan") || !input.compare("nanf") || !input.compare("-inf") \
		|| !input.compare("inf") || !input.compare("-inff") || !input.compare("inff"))
	{
		this->type = PSEUDO_LITTERAL;
		return (true);
	}
	int	i = 0;
	int	len = (int)(this->input.length());
	int	count_point = 0;
	if (len == 1 || (len == 3 && input[0] == '\'' && input[2] == '\''))
	{
		if ((len == 1 && std::isprint(input[0])) || (len == 3 && std::isprint(input[1])))
		{
			if (len == 3)
				i = 1;
			if ('0' <= input[i] && input[i] <= '9')
				this->type = INT;
			else
				this->type = CHAR;
			return (true);
		}
		else
			return (false);
	}
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < len)
	{
		while ('0' <= input[i] && input[i] <= '9')
			i++;
		if (input[i] == '.')
		{
			count_point++;
			if (input[i + 1] && '0' <= input[i + 1] && input[i + 1] <= '9' && count_point == 1 && i != 0)
			{
				i++;
				this->type = DOUBLE;
			}
			else 
				break;
		}
		else if (input[i] == 'f' && i != 0)
		{
			if (!input[i + 1] && '0' <= input[i - 1] && input[i - 1] <= '9')
			{
				this->type = FLOAT;
				break;				
			}
			else
				break;
		}
		else
			break;
	}
	if ((i != len && this->type == NONE) || count_point > 1)
		return(this->dataValid = false, false);
	if (this->type == NONE)
		this->type = INT;
	return (true);
}

void	ScalarConverter::testLimits()
{
	isChar = false;
	isPrintable = false;
	isInt = false;
	isDouble = false;
	isFloat = false;
	if (!input.compare("nan") || !input.compare("nanf"))
	{
		isDouble = true;
		doubleRepresentation = NAN;
		isFloat = true;
		floatRepresentation = NAN;
		return ;
	}
	else if (!input.compare("-inf") || !input.compare("-inff"))
	{
		isDouble = true;
		doubleRepresentation = -1 * std::numeric_limits<double>::infinity();
		isFloat = true;
		floatRepresentation =  -1 * std::numeric_limits<float>::infinity();;
		return ;
	}
	else if (!input.compare("inf") || !input.compare("inff"))
	{
		isDouble = true;
		doubleRepresentation = std::numeric_limits<double>::infinity();
		isFloat = true;
		floatRepresentation = std::numeric_limits<float>::infinity();;
		return ;
	}
}

void	ScalarConverter::convert()
{
	this->isChar = true;
	this->isPrintable = true;
	this->isInt = true;
	this->isDouble = true;
	this->isFloat = true;
	
	// From a char -> upgrade casting to int / double / float : no issue
	if (this->type == CHAR)
	{
		std::cerr << "Bien un char !" << std::endl;
		if (this->input.length() == 3)
			this->cRepresentation = *(this->input.c_str() + 1);
		else
			this->cRepresentation = *(this->input.c_str());
		this->intRepresentation = this->cRepresentation;
		this->floatRepresentation = this->cRepresentation;
		this->doubleRepresentation = this->cRepresentation;
	}
	else 
	{
		// conversion from stringstream and the try to get an int, float or double
		this->isChar = false;
		this->isPrintable = false;
		
		std::string data = this->input;
		if (data[data.length() - 1] == 'f')
			data.erase(data.length() - 1);
		std::stringstream ss(data);

		
		ss >> this->cRepresentation;
		if(ss.fail())
			this->isPrintable = false;
		else if (32 < this->cRepresentation && this->cRepresentation < 127)
			this->isPrintable = true;
		ss.clear();
		ss.seekg(0);
		
		ss >> this->intRepresentation;
		if (ss.fail())
			this->isInt = false;
		ss.clear();
		ss.seekg(0);
		
		ss >> this->floatRepresentation;
		if (ss.fail())
			this->isFloat = false;
		ss.clear();
		ss.seekg(0);
		
		ss >> this->doubleRepresentation;
		if (ss.fail())
			this->isDouble = false;
		ss.clear();
		ss.seekg(0);
	}
}

ScalarConverter::operator char() const {
	return(this->cRepresentation);	
}

ScalarConverter::operator int() const {
	return(this->intRepresentation);	
}

ScalarConverter::operator float() const {
	return(this->floatRepresentation);	
}

ScalarConverter::operator double() const {
	return(this->doubleRepresentation);	
}

std::ostream	&	operator<<(std::ostream &out, const ScalarConverter &myScalar)
{
	out << "./convert " << myScalar.input << " : \n" << std::endl;
	if (!myScalar.dataValid)
		out << "INVALID DATA" << std::endl; 
	else
	{
		// std::cerr << "is char ? !" << myScalar.isChar << std::endl;
		// std::cerr << "is printable ? !" << myScalar.isPrintable << std::endl;
		if (myScalar.isChar == true && myScalar.isPrintable == true)
			out << "char : '" << static_cast<char>(myScalar) << "' "<< std::endl;
		else if (myScalar.isChar == false && myScalar.isPrintable == true)
			out << "char : Non displayable \n" ;
		else
			out << "char : impossible \n" ;
		if(myScalar.isInt == true)
			out << "int : " << static_cast<int>(myScalar) << std::endl;
		else
			out << "int : impossible \n";
		if(myScalar.isFloat == true)
			out << "float : " << static_cast<float>(myScalar) << "f" << std::endl;
		else
			out << "float : impossible \n";
		if(myScalar.isDouble == true)
			out << "double : " << static_cast<double>(myScalar) << std::endl;
		else
			out << "double : impossible \n";
	}
	return (out);	
}

