/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:48:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 16:42:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "surcharge.hpp"

int	main(void)
{
	Integer	i(5);
	Integer j(10);
	Integer	k(20);

	std::cout << "Init : " << i.getValue() << std::endl;
	std::cout << "Adresse de i : " << &i << "vs. adresse de k : " << &k << std::endl;
	std::cout << std::endl;
	i = k;
	std::cout << "After ope : " << i.getValue() << std::endl;	
	std::cout << "Adresse de i : " << &i << "vs. adresse de k : " << &k << std::endl;
	std::cout << std::endl;
	
	i = k + j;
	std::cout << "After ope : " << i.getValue() << std::endl;	
	std::cout << "Adresse de i : " << &i << "vs. adresse de k : " << &k << std::endl;

	std::cout << std::endl;
	Integer v(k);
	std::cout << "Adresse de v : " << &v << "vs. adresse de k : " << &k << std::endl;
	return (0);
}