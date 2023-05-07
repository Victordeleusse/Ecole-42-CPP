/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:05:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 20:07:54 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp" 

class Cure : public AMateria
{
	public :

		Cure(void);
		Cure(const Cure &myCure);
		~Cure(void);
		
		Cure	&	operator=(const Cure &myCure);

		AMateria* clone() const;
		void use(ICharacter& target);
}

#endif