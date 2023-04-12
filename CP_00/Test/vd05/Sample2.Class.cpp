/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:32:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 16:36:24 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.Class.hpp"

// Utilisation de la methode d initialisation de liste
// Initialise ma const pi a la valeur de p3
// Utilisation du mot cle CONST sur la fonction bar -> Une protection importante en C++ sur le changement de valeur de mes variables
// Plus le code C++ est const et read only, plus il sera solide sur le long terme

Sample2::Sample2(float const p3) : pi(p3), qd(42) {
	
	std::cout << "Appel au constructeur 2 !" << std::endl;
	std::cout << "qd :" << this->qd << std::endl;
	std::cout << "pi :" << this->pi << std::endl;
	return ;

}

Sample2::~Sample2(void) {
	
	std::cout << "Appel au destructeur 2 !" << std::endl;
	return ;

}

void Sample2::bar(void)const{
	
	std::cout << "Appel a la fonction bar !" << std::endl;
	return ;
	
}