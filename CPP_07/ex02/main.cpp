/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:26:06 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/09 12:26:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>			myIntArray(5);
	Array<int>			myIntArray_copie(myIntArray);
	Array<std::string>	myStringArray(3);
	Array<std::string>	myStringArray_copie(myStringArray);
	
	try
	{
		std::cout << "_______ Test on 'int type' arrays _______\n\n";
		std::cout << myIntArray << std::endl;
		myIntArray[0] = 5;
		myIntArray[1] = 10;
		myIntArray[4] = 10;
		std::cout << myIntArray << std::endl;
		std::cout << myIntArray_copie << std::endl;
		myIntArray_copie[0] = 1;
		myIntArray_copie[1] = 1;
		myIntArray_copie[2] = 1;
		std::cout << myIntArray << std::endl;
		std::cout << myIntArray_copie << std::endl;	
		
		std::cout << "\n_______ Test on 'string type' arrays _______\n\n";
		myStringArray[0] = "Bonjour";
		myStringArray[1] = "Victor";
		myStringArray[2] = "ca va ?";
		std::cout << myStringArray << std::endl;
		myStringArray_copie = myStringArray;
		myStringArray_copie[1] = "Camille";
		std::cout << myStringArray << std::endl;
		std::cout << myStringArray_copie << std::endl;
		
	}
	catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
	return (0);
}