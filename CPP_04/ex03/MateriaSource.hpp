/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:56:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 14:24:54 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		
		MateriaSource();
		MateriaSource(const MateriaSource &myMateriaSource);
		~MateriaSource();
		
		MateriaSource	&	operator=(const MateriaSource &myMateriaSource);

		
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
	protected :

		AMateria	**learning_tab;
		int			nb_AMlearned;
		
};

#endif