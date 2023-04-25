/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:24:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 09:43:22 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
