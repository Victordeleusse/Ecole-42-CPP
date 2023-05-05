/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:52:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 16:00:30 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include "Animal.hpp"

class WrongAnimal : virtual public Animal
{
	public :
	
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &myWrongAnimal);
		virtual ~WrongAnimal(void);

		WrongAnimal	&	operator=(const WrongAnimal &myWrongAnimal);
		
		void	makeSound(void) const;
};

#endif