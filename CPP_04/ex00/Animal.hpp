/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:29:47 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 17:12:48 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PRINCIPE DU POYMORPHISME
// 
// Je defini un indice idx dans ma classe DOG
// En definissant un ptr_Animal (Animal *j) a partir d un ptr_Dog (new Dog()) -> j n'aura par definition pas d indice
// 
// En definissant une virtual function qui me permet d acceder a cet indice dans la classe ANIMAL puis en la redefinissant dans DOG -> Je donne la possibilite
// aux objets d ANIMAL cree depuis DOG d avoir acces a cet indice. 
*/


#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
	public :

		Animal(void);
		Animal(std::string new_type);
		Animal(const Animal &myAnimal);
		virtual ~Animal(void);

		Animal & operator=(const Animal &myAnimal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		// virtual int		get_indx(void) const = 0;

	protected :
	
		std::string	type;
		
};

#endif