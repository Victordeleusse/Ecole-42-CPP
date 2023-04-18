/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:45:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 15:38:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

Sample::Sample(char p1, int p2, float p3){
	
	std::cout << "Appel au constructeur !" << std::endl;
	this->a1 = p1;
	this->a2 = p2;
	this->a3 = p3;
	std::cout << "a1 :" << this->a1 << std::endl;
	std::cout << "a2 :" << this->a2 << std::endl;
	std::cout << "a3 :" << this->a3 << std::endl;
	return ;
	
}

Sample::~Sample(void){
	
	std::cout << "Appel au destructeur !" << std::endl;
	return ;
	
}

void Sample::bar(void){
	
	std::cout << "Appel de la fonction BAR !" << std::endl;
	return ;
	
}