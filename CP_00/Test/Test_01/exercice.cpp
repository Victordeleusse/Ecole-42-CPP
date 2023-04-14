/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:09:54 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/13 17:42:28 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victor.Class.hpp"

int	main(void)
{
	Victor	first_instance(10);
	Victor	second_instance(20);

	Victor	*new_instance = &first_instance;

	int		Victor::*p;
	void	(Victor::*f)(int *nb);

	std::cout << "Nombre d instance generee : " << Victor::_ft_get_nbinstance() << std::endl;
	std::cout << "Valeur du 2eme via le premier : " << first_instance.ft_get_varint(&second_instance) << std::endl;
	std::cout << "Valeur du 1er via le deuxieme : " << second_instance.ft_get_varint(new_instance) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Valeur generale : " << first_instance._all << std::endl;
	
	
	
	// Victor::_ft_change_id(new_instance, 30);
	

	return (0);
}