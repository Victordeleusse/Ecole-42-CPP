/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Strings.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:54:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/16 12:02:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string name = "";
	std::cout << "Veuillez entrer votre nom : ";
	std::cin >> name; 
	std::cout << std::endl;
	std::cout << "Votre nom : " << name << std::endl;
	std::string::iterator it = name.begin();
	while (it != name.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return (0);
}