/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_03.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:00:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 14:32:53 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

// dans mon point hpp -> J ai creer ma clase en lui assignant un constructeur et un destructeur : class NAME def public
// dans mon class.cpp -> J ai defini le comportement du constructeur et du destructeur : syntax similaire au namespace 
// 					  -> par de return determine
// dans mon main.cpp -> Je defini une instance de classe correspondant

int	main(void) {
	
	Sample first_instance;
	Sample second_instance;

	// first_instance.foo = 10;
	second_instance.foo = 20;
	
	// first_instance.bar();
	std::cout << "Valeur de ma premiere instance : " << first_instance.foo << std::endl;
	std::cout << std::endl;
	second_instance.bar();
	// second_instance.bar();
	// std::cout << "Valeur de ma seconde instance : " << second_instance.foo << std::endl;
	
}