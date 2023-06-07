/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:48:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/07 16:55:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int	a = 12;
	int b = 35;

	swap(&a, &b);
	std::cout << "valeur de a : " << a << " || valeur de b : " << b << std::endl;

	std::cout << "calcul du min : " << min(a, b) << std::endl;
	std::cout << "calcul du max : " << max(a, b) << std::endl;

	return (0);
}
