/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:51:59 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 15:50:39 by vde-leus         ###   ########.fr       */
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
		
	private :

		Brain	*Cat_brain;
		
};

#endif