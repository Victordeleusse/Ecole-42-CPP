/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_07.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:04:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/13 17:53:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

// Implementation d un POINTEUR DE CLASS 
// -> Pointeur sur un int membre de la class en question
// -> Pointeur sur une fonction membre de la class en question

int	main(void)
{
	Sample	first_instance(10);
	Sample	second_instance(20);

	Sample	*new_instance = &first_instance;

	int 	Sample::*p = NULL;
	void	(Sample::*f)(int *nb_test);
	
	p = &Sample::var_int;
	f = &Sample::ft_incremente;
	
	std::cout << "Diff 1 vs. 2 : " << first_instance.ft_compare(&second_instance) << std::endl;
	std::cout << "Diff 2 vs. 1 : " << second_instance.ft_compare(&first_instance) << std::endl;
	
	std::cout << "Nombre d instances generees : " << second_instance._ft_get_nbInstance() << std::endl;
	std::cout << "Nombre d instances generees : " << first_instance._ft_get_nbInstance() << std::endl;
	
	Sample	third_instance(30);
	std::cout << "Nombre d instances generees : " << third_instance._ft_get_nbInstance() << std::endl;
	std::cout << "Nombre d instances generees : " << third_instance._ft_get_nbInstance() << std::endl;


	// /////////////////////

	std::cout << "Valeur test first : " << first_instance.var_int << std::endl;
	first_instance.*p = 21;
	std::cout << "Valeur test first : " << first_instance.var_int << std::endl;
	new_instance->*p = 84;
	std::cout << "Valeur test first : " << new_instance->var_int << std::endl;
	std::cout << "Valeur test first : " << second_instance.var_int << std::endl;
	// std::cout << "Valeur test : " << *(Sample::*p) << std::endl;
	(first_instance.*f)(&first_instance.var_int);
	std::cout << "Valeur test first : " << first_instance.var_int << std::endl;
	(new_instance->*f)(&first_instance.var_int);
	std::cout << "Valeur test first : " << first_instance.var_int << std::endl;

	return (0);
}
