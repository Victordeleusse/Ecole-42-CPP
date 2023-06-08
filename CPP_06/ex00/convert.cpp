/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:55:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 16:57:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &myScalar)
{
	*this = myScalar;
	return ;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter	& ScalarConverter::operator=(const ScalarConverter &myScalar)
{
	(void)myScalar;
	return (*this) ;
}

const char *ScalarConverter::WrongInputException::what() const throw()
{
	return ("Wrong input, please use : \n\t - litteral char ('a', 'c' ..)\
	\n\t - int (0, 42, -42, ...) \n\t - float (0.0f, 42.0f) \n\t - double (0.0, 4.2) \n");
}

bool	ScalarConverter::isValid(t_data *data)
{
	if (!data->input.compare("nan") || !data->input.compare("nanf") || !data->input.compare("-inf") \
		|| !data->input.compare("inf") || !data->input.compare("-inff") || !data->input.compare("inff"))
	{
		data->type = PSEUDO_LITTERAL;
		return (true);
	}
	int	i = 0;
	int	len = (int)(data->input.length());
	int	count_point = 0;
	if (len == 3 && data->input[0] == '\'')
	{
		if (data->input[2] == '\'' &&  std::isprint(data->input[1]))
		{
			data->type = CHAR;
			return (true);
		}
		else
			return (false);
	}
	if (data->input[i] == '+' || data->input[i] == '-')
		i++;
	while (i < len)
	{
		while ('0' <= data->input[i] && data->input[i] <= '9')
			i++;
		if (data->input[i] == '.')
		{
			count_point++;
			if (data->input[i + 1] && '0' <= data->input[i + 1] && data->input[i + 1] <= '9' && count_point == 1 && i != 0)
			{
				i++;
				data->type = DOUBLE;
			}
			else 
				break;
		}
		else if (data->input[i] == 'f' && i != 0)
		{
			if (!data->input[i + 1] && '0' <= data->input[i - 1] && data->input[i - 1] <= '9')
			{
				data->type = FLOAT;
				break;				
			}
			else
				break;
		}
		else
			break;
	}
	data->hasPoint = false;
	if (count_point)
		data->hasPoint = true;	
	if ((i != len && data->type == NONE) || count_point > 1)
		return(data->dataValid = false, false);
	if (data->type == NONE)
		data->type = INT;
	return (true);
}

void	ScalarConverter::testLimits(t_data *data)
{
	if (!data->input.compare("nan") || !data->input.compare("nanf"))
	{
		data->isDouble = true;
		data->doubleRepresentation = NAN;
		data->isFloat = true;
		data->floatRepresentation = NAN;
		return ;
	}
	else if (!data->input.compare("-inf") || !data->input.compare("-inff"))
	{
		data->isDouble = true;
		data->doubleRepresentation = -1 * std::numeric_limits<double>::infinity();
		data->isFloat = true;
		data->floatRepresentation =  -1 * std::numeric_limits<float>::infinity();;
		return ;
	}
	else if (!data->input.compare("inf") || !data->input.compare("inff"))
	{
		data->isDouble = true;
		data->doubleRepresentation = std::numeric_limits<double>::infinity();
		data->isFloat = true;
		data->floatRepresentation = std::numeric_limits<float>::infinity();;
		return ;
	}
}

void	ScalarConverter::convert(char *myInput)
{
	t_data	data;

	data.isChar = true;
	data.isPrintable = true;
	data.isInt = true;
	data.isDouble = true;
	data.isFloat = true;
	data.dataValid = true;
	data.type = NONE;
	
	data.input = myInput;
	if (!isValid(&data))
		throw(WrongInputException());
	if (data.type == PSEUDO_LITTERAL)
		testLimits(&data);
	else 
	{
		// From a chara. upgrade casting to int / double / float : no issue
		if (data.type == CHAR)
		{
			if (data.input.length() == 3)
				data.cRepresentation = *(data.input.c_str() + 1);
			else
				data.cRepresentation = *(data.input.c_str());
			if (isprint(data.cRepresentation))
			{	
				std::cout << "TYPE : " << data.cRepresentation << std::endl;
				data.isPrintable = true;
				data.intRepresentation = data.cRepresentation;
				data.floatRepresentation = data.cRepresentation;
				data.doubleRepresentation = data.cRepresentation;
			}
		}
		else 
		{
			// conversion from stringstream and then try to get an int, float or double
			std::string str = data.input;
			if (str[str.length() - 1] == 'f')
				str.erase(str.length() - 1);
			std::stringstream ss(str);
			
			ss >> data.intRepresentation;
			if (ss.fail())
				data.isInt = false;
			ss.clear();
			ss.seekg(0);
			
			if (data.isInt == true)
			{
				data.cRepresentation = data.intRepresentation;
				if (data.intRepresentation < 0 || data.intRepresentation > 127)
					data.isChar = false;
				else if (33 > data.intRepresentation || data.intRepresentation == 127)
					data.isPrintable = false;
			}
			ss.clear();
			ss.seekg(0);
			
			ss >> data.floatRepresentation;
			if (ss.fail())
				data.isFloat = false;
			ss.clear();
			ss.seekg(0);
			
			ss >> data.doubleRepresentation;
			if (ss.fail())
				data.isDouble = false;
			ss.clear();
			ss.seekg(0);
		}
	}
	printRes(&data);
}

void	ScalarConverter::printRes(t_data *data)
{
	std::cout << "./convert " << data->input << " : \n" << std::endl;
	if (!data->dataValid)
		std::cerr << "INVALID DATA" << std::endl;
	else 
	{
		if (data->isChar == false)
			std::cout << "char : impossible \n" ;
		else if (data->isChar == true && data->isPrintable == false)
			std::cout << "char : Non displayable \n" ;
		else
			std::cout << "char : '" << static_cast<char>(data->cRepresentation) << "' "<< std::endl;
		if(data->isInt == true)
			std::cout << "int : " << static_cast<int>(data->intRepresentation) << std::endl;
		else
			std::cout << "int : impossible \n";
		if(data->isFloat == true)
			std::cout << "float : " << static_cast<float>(data->floatRepresentation) << "f" << std::endl;
		else
			std::cout << "float : impossible \n";
		if(data->isDouble == true)
		{
			std::cout << "double : " << static_cast<double>(data->doubleRepresentation);
			if (!data->hasPoint)
				std::cout << ".0";
			std::cout <<  std::endl;
		}
		else
			std::cout << "double : impossible \n";	
	}
}
