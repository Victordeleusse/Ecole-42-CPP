/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_05.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:57:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 16:34:16 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"
#include "Sample2.Class.hpp"


int	main(void){
	
	Sample	first_instance('a', 42, 3.4f);
	Sample2	seconde_instance(3.14);

	seconde_instance.bar();
	
	std::cout << "Valeur de qd : " << seconde_instance.qd << std::endl;
	
	return (0);
}