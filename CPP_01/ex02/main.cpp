/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:14:47 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/23 16:36:16 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "L'adresse de la string en mémoire est : " << &string << std::endl;
	std::cout << "L'adresse stockée dans stringPTR est : " << &(*stringPTR) << std::endl;
	std::cout << "L'adresse stockée dans stringREF est : " << &(stringREF) << std::endl;
	
	std::cout << "La valeur de la string est : " << string << std::endl;
	std::cout << "La valeur pointée par stringPTR est : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est : " << stringREF << std::endl;
	
	return (0);
}