/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:56:56 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 11:42:53 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

// Meme syntax entre Namespace et Class ici
// Appel au constructeur

Sample::Sample(void) {
	
	char	buffer[512];
	
	std::cout << "Appel au constructeur de classe" << std::endl;
	std::cout << "Entrer un mot : ";
	std::cin >> buffer;
	std::cout << "Votre mot est :" << buffer << "." << std::endl;
	return ;
}

// Aucun type de retour defini pour le constructeur

Sample::~Sample(void) {

	std::cout << "Appel au destructeur de classe" << std::endl;
	return ;
}

// Aucun type de retour defini pour le destructeur 
