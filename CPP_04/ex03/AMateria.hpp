/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:37:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 17:33:49 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

// CLASSE ABSTRAITE

# include <iostream>
# include <string.h>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:

		std::string	type;

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria &myAMateria);
		virtual ~AMateria(void);
		
		AMateria & operator=(const AMateria & myAMateria);
		
		std::string const &	getType(void) const;
		// void				setType(std::string new_name);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif