/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:24:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 16:44:55 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nosed.hpp"

int	main(void)
{
	std::ifstream		original("fichier.txt");
	std::string			file_content;
	std::vector<int>	positions;
	std::string			str1 ("needle");
	// std::string			str2 ("thorns");
	int				idx = 0;
	
	std::getline(original, file_content, '\0');
	original.close();
	// std::cout << file_content << std::endl;
	idx = file_content.find(str1);
	// std::cout << idx << std::endl;
	if (idx != std::string::npos)
		positions.push_back(idx);
	while (idx < (file_content.length() - str1.length())) 
	{
		idx = file_content.find(str1, idx + 1);
		positions.push_back(idx);
		idx += str1.length();
	}
	std::vector<int>::iterator it = positions.begin();
	while (it != positions.end())
	{
		std::cout << "position -> " << *it << std::endl;
		it++;
	}
	return (0);
}