/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedWinner.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:26:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/08 13:14:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedWinner.hpp"

MySed::MySed(std::string filename) : infile(filename)
{
	this->outfile = infile + ".replace";
	return ;
}

MySed::~MySed(void)
{
	return ;
}

std::string	MySed::get_infile(void)
{
	return (this->infile);
}

std::string	ft_clean_line(std::string line, std::string s1, std::string s2)
{
	size_t		pos = 0;
	size_t		i = 0;
	int			count = 0;
	std::string	new_line ("");
	
	while ((pos = line.find(s1, i)) != std::string::npos)
	{
		new_line = new_line + line.substr(i, (pos - i)) + s2;
		pos += s1.length();
		i = pos;
		count++; 
	}
	if (!count)
		return (line);
	new_line = new_line + line.substr(i);
	return (new_line);
}

void	MySed::ft_replace(std::string s1, std::string s2)
{
	std::ifstream	reading_file(this->infile.c_str(), std::ios::in);
	std::ofstream	writting_file(this->outfile.c_str(), std::ios::out);

	if (reading_file && writting_file)
	{
		std::string		buffer ("");
		while (std::getline(reading_file, buffer, '`'))
		{
			buffer = ft_clean_line(buffer, s1, s2);
			writting_file << buffer;
		}
		reading_file.close();
		writting_file.close();		
	}
	else
		std::cerr << "File Error !" << std::endl;
	return ;
}



