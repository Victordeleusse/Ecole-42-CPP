/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:37:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 19:08:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:

		std::string	type;

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria &myAMateria);
		~AMateria(void);
		
		AMateria & operator=(const AMateria & myAMateria);
		
		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif