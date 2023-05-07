/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:43:33 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 15:50:19 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :

		Dog(void);
		Dog(const Dog &myDog);
		~Dog(void);

		Dog	&	operator=(const Dog &myDog);

		void	makeSound(void) const;

	private :

		Brain	*Dog_brain;
		
};

#endif