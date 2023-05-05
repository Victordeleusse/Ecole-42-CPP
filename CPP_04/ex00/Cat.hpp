/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:51:59 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:27:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
	public :

		Cat(void);
		Cat(const Cat &myCat);
		~Cat(void);

		Cat	&	operator=(const Cat &myCat);
		
		void		makeSound(void) const;

};

#endif