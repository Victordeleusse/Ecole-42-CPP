/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:48:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/26 13:18:58 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "string"

int main(void)
{
	int	a = 12;
	int b = 35;

	std::cout << "valeur de a : " << a << " || valeur de b : " << b << std::endl;
	std::cout << "SWAP" <<std::endl;
	::swap(a, b);
	std::cout << "valeur de a : " << a << " || valeur de b : " << b << std::endl;
	std::cout << "calcul du min : " << ::min(a, b) << std::endl;
	std::cout << "calcul du max : " << ::max(a, b) << std::endl;

	std::string	test1 = "Bonjour";
	std::string	test2 = "Hello";
	std::cout << "valeur de test1 : " << test1 << " || valeur de test2 : " << test2 << std::endl;
	std::cout << "SWAP" <<std::endl;
	::swap(test1, test2);
	std::cout << "valeur de test1 : " << test1 << " || valeur de test2 : " << test2 << std::endl;
	std::cout << "calcul du min : " << ::min(test1, test2) << std::endl;
	std::cout << "calcul du max : " << ::max(test1, test2) << std::endl;

	return (0);
}
