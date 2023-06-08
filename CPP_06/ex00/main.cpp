/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:04:47 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/08 09:39:19 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong use of the function" << std::endl;
		return (-1);
	}
	try	
	{
		ScalarConverter::convert(argv[1]);
	}
	catch( const std::exception& e ) 
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}