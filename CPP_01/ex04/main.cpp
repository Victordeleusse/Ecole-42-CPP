/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:24:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/08 12:32:52 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedWinner.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Wrong inputs !\n", 1);
	MySed test((argv[1]));
	test.ft_replace(argv[2], argv[3]);
	return (0);
}
