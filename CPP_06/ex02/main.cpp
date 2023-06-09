/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:47:20 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/19 11:21:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grand.hpp"
// #include "grand.cpp"


int	main(void)
{
	Base	*test1 = generate();
	identify(test1);
	Base	*test2 = generate();
	identify(test2);
	Base	*test3 = generate();
	identify(test3);

	Base	*test4 = generate();
	identify(&(*test4));

	delete test1;
	delete test2;
	delete test3;
	delete test4;

	return (0);
		
}