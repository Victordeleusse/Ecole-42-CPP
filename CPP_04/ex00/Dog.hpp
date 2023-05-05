/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:43:33 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:27:29 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
	public :

		Dog(void);
		Dog(const Dog &myDog);
		~Dog(void);

		Dog	&	operator=(const Dog &myDog);

		void		makeSound(void) const;

};

#endif