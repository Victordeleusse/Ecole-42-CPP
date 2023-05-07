/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:29:47 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 17:26:48 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		virtual void	makeSound(void) const = 0;

	protected :
	
		std::string	type;
};

#endif