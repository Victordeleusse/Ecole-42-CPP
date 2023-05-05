/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:52:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:07 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include "Animal.hpp"

class WrongAnimal : public Animal
{
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &myWrongAnimal);
	~WrongAnimal(void);

	WrongAnimal	&	operator=(const WrongAnimal &myWrongAnimal);
	
	void	makeSound(void);
};

#endif