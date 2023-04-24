/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:24:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 19:12:38 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nosed.hpp"

void	ft_get_positions(std::string source, std::string str1, std::vector<int> *positions)
{
	int	idx = 0;

	idx = source.find(str1);
	if (idx != std::string::npos)
		(*positions).push_back(idx);
	while (idx < (source.length() - str1.length())) 
	{
		idx = source.find(str1, idx + 1);
		(*positions).push_back(idx);
		idx += str1.length();
	}
}

void	ft_get_unchangedStr(std::string source, std::string str1, std::vector<int> positions, std::vector<std::string> *unchanged_str)
{
	std::string	buffer ("");
	std::vector<int>::iterator	it = positions.begin();
	int	start = 0;
	
	while (it != positions.end())
	{
		buffer = source.substr(start, (*it - start));
		(*unchanged_str).push_back(buffer);
		start = *it + str1.length();
		it++;
	}
	buffer = source.substr(start);
	(*unchanged_str).push_back(buffer);
}

std::vector<std::string>	ft_parse(char **argv)
{
	std::ifstream				original(argv[1]);
	std::vector<std::string>	unchanged_str;
	std::string					file_content;
	std::vector<int>			positions;
	std::string					str1 (argv[2]);
	
	if (original.bad())
		std::cout << "Impossible d'ouvrir le fichier en entree" << std::endl;
	else 
	{	
		std::getline(original, file_content, '\0');
		ft_get_positions(file_content, str1, &positions);
		ft_get_unchangedStr(file_content, str1, positions, &unchanged_str);
	}
	original.close();
	return (unchanged_str);
}

int	ft_replace(char **argv, std::vector<std::string> unchanged_str)
{
	std::string		str2 (argv[3]);
	std::string		new_file = (std::string)argv[1] + "replace";
	std::ofstream	copie(new_file);
	
	if (copie.bad())
	{
		std::cout << "Impossible d'ouvrir le fichier de retour" << std::endl;
		return (0);
	}
	std::vector<std::string>::iterator it = unchanged_str.begin();
	while (it != unchanged_str.end() - 1)
	{
		copie << *it;
		copie << str2;
		it++;
	}
	if (!(*it).empty())
		copie << *it;
	copie.close();
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{	
		std::cout << "Please enter 3 parameters as follow : ./better_call_sed INFILE str_to_replace str_substitute" << std::endl;
		return (1);
	}
	if (ft_parse(argv).empty())
		return (1);
	if (!ft_replace(argv, ft_parse(argv)))
		return (1);
	return (0);
}