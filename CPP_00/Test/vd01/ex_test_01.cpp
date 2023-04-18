/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_01.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:59:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/11 19:33:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int	main(void){
	
	char	buffer[512];

	std::cout << "Hello world !" << std::endl;
	std::cout << "Input a word : ";
	std::cin >> buffer;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "WORD : " << buffer << std::endl;

	return (0);	
}
