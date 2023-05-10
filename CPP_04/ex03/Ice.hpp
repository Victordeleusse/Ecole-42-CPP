/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:42:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 14:42:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :
	
		Ice(void);
		Ice(const Ice &myyIce);
		~Ice(void);
		
		Ice	&	operator=(const Ice &myIce);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif