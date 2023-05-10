/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:56:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 18:57:15 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "AMateria.hpp"
# include "IMateria.hpp"

class MateriaSource : public IMateria
{
	public:
		
		MateriaSource();
		
		void learnMateria(AMateria*) = 0;
		AMateria* createMateria(std::string const & type);
	
};

#endif