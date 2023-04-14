/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:11:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 18:57:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact(void) {
	
	std::cout << "Appel au constructeur !" << std::endl;
	ft_init_contact();
	return;
}

Contact::~Contact(void) {
	
	std::cout << "Appel au destructeur !" << std::endl;
	return;
}

void	Contact::ft_init_contact(void) {
	
	
}
