/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:37:40 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 14:20:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string.h>
# include "ICharacter.hpp"

// CLASSE ABSTRAITE

class AMateria
{
	protected:

		std::string	type;

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria &myAMateria);
		~AMateria(void);
		
		AMateria & operator=(const AMateria & myAMateria);
		
		std::string const &	getType(void) const;
		void				setType(void);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif