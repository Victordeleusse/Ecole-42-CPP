/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_02.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:21:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 11:17:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

// Creation de first_instance, instance de classe de type Sample
// Sample - static
// Instance - dynamic

// Avec l instanciation -> appel au code du constructeur
// -> Destructeur appele ensuite UNIQUEMENT AVANT LA FIN DU PROGRAMME 

int	main(void) {
	
	Sample	first_instance;
	// std::cout << "Premiers tests" << std::endl ;
	Sample	second_instance;

	return (0);
}
