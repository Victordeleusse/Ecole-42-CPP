/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:58:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/16 12:33:40 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoinexchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Please enter a valid input file .txt only !" << std::endl;
		return (1);	
	}
	try
	{
		btc 									myBTC(argv[1]);
		if (myBTC.validateData(myBTC.getInputFile()) && myBTC.validateData(myBTC.getExchangeRateFile()))
			myBTC.fileERMap();
		std::map<std::string, float> 			data = myBTC.getData();
		std::map<std::string, float>::iterator 	it = data.begin();
		// while (it != data.end())
		// {
			std::cout << it->first << " -> " << it->second << std::endl;
			// it++;
		// }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}