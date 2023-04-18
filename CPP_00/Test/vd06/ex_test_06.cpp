/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_06.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:55:34 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 17:05:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

int	main(void)
{
	Sample	first_instance('a', 10);
	
	std::cout << "Valeur de i1 : " << first_instance.i1 << std::endl;
	first_instance.i1 = first_instance.bar(5);
	std::cout << "Valeur de i1 : " << first_instance.i1 << std::endl;
	return (0);	
	
}