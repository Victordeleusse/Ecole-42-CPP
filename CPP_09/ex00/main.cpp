/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:58:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/15 19:47:29 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoinexchange.hpp"

int	main(void)
{
	btc 									myBTC;
	std::map<std::string, float> 			data = myBTC.getData();
	std::map<std::string, float>::iterator 	it = data.begin();

	try
	{
		if (myBTC.validateData())
			myBTC.fileDataMap();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	while (it != data.end())
	{
		std::cout << it->first << " -> " << it->second << std::endl;
		it++;
	}
	return (0);
}