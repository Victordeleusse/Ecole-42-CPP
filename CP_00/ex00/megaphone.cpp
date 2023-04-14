/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:43:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 13:40:57 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 'a' + 'A';
			std::cout << argv[i][j];
			j++;	
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
