/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:43:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 15:48:20 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Utilisation d'un iterator et de ses parametres .begin() et .end()
// On aurait pu egalement utiliser la propriete .length() de string avec i < str.length()

std::string ft_capitalize(std::string str)
{
	std::string::iterator it = str.begin();
	while (it != str.end())
	{
		*it = std::toupper(*it);
		it++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	i = 1;
	while (i < argc)
	{
		std::cout << ft_capitalize((std::string)argv[i]);
		i++;
	}
	return (0);
}
