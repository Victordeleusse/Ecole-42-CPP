/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victor.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:53:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/13 17:42:07 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victor.Class.hpp"

Victor::Victor(int	var_def) : var_int(var_def) {

	std::cout << "Appel au constructeur !" << std::endl;
	ft_incremente_nbinstance(&_nb_instance_gen);
	return;
	
}

Victor::~Victor(void) {
	
	std::cout << "Appel au destructeur !" << std::endl;
	return;
	
}

int	Victor::ft_get_varint(Victor *instance) {
	
	return (instance->var_int);
	
}

void	Victor::ft_incremente_nbinstance(int *nb) {

	*nb = *nb + 1;
	return ;
	
}

void	Victor::ft_change_varint(int *nombre, int z) {
		
	*nombre = z;
	return ;
	
}

int	Victor::_ft_get_nbinstance(void) {
	
	return (Victor::_nb_instance_gen);
	
}

void	Victor::_ft_change_id(Victor *instance, int z) {
	
	instance->var_int = z;
	return ;
	
}

int	Victor::_all = 1;

int	Victor::_nb_instance_gen = 0;