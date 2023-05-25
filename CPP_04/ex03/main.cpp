/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:31:00 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/25 14:52:31 by vde-leus         ###   ########.fr       */
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
	ICharacter* meBis = new Character("meBis");
	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	meBis->equip(tmp2);
	meBis->use(0, *bob);
	delete bob;
	delete me;
	delete meBis;
	delete src;
	return 0;
}