/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:22:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/30 15:34:08 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int	main(void)
{
	Data 		*myData = new Data; //en c++ -> pas de malloc meme pour une structure
	Serializer 	s;
		
	myData->int_data = 1;
	myData->str_data = "Victor";
	
	std::cout << "int : " << s.deserialize(s.serialize(myData))->int_data << std::endl;
	std::cout << "str : " << s.deserialize(s.serialize(myData))->str_data << std::endl;
	return (0);
}
