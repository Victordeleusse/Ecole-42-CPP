/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:31:00 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 17:20:47 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << "\n1. " << src->get_nb_AMlearned() << "\n" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "\n2. " << src->get_nb_AMlearned() << "\n" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}