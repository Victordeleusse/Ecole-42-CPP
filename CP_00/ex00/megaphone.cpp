/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:43:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 15:30:17 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	i = 1;
	while (i < argc)
	{
		std::string str (argv[i]);
		std::string::iterator it = str.begin();
		while (it != str.end())
		{
			std::cout << *it;
			it++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
