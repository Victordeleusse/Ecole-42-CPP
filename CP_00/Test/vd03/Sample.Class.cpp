/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:54:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 14:45:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

// THIS est un pointeur vers l instance courante

Sample::Sample(void) {
	
	std::cout << "Appel au constructeur de classe" << std::endl;
	this->foo = 42;
	std::cout << "La variable vaut |||" << foo << std::endl;
	this->bar();
	return ;
	
}

Sample::~Sample(void) {
	
	std::cout << "Appel au destructeur de classe" << std::endl;
	return ;
	
}

void Sample::bar(void) {
	
	std::cout << "Appel de ma fonction bar !" << std::endl;
	return ;
}
