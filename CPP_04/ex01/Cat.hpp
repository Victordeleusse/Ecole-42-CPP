/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:51:59 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 17:24:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal 
{
	public :

		Cat(void);
		Cat(const Cat &myCat);
		~Cat(void);

		Cat	&	operator=(const Cat &myCat);
		
		void	makeSound(void) const;
		Brain	*getBrain(void);
		
	private :

		Brain	*Cat_brain;
		
};

#endif