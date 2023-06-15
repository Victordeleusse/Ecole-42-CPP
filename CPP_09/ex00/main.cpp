/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:58:57 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/15 19:11:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoinexchange.hpp"

int	main(void)
{
	btc 							myBTC;
	std::map<std::string, float> 	data = myBTC.getData();
 	std::map<std::string, float>::key_compare comp = data.key_comp();

	
	std::string l = data.rbegin()->first;
	std::map<std::string, float>::iterator it = data.begin();
	do {
        std::cout << it->first
             << " => "
             << it->second
             << '\n';
    } while (comp((*it++).first, l));
}