/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:56:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 16:09:51 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

class MateriaSource : public IMateriaSource
{
	public:
		
		MateriaSource();
		MateriaSource(const MateriaSource &myMateriaSource);
		~MateriaSource();
		
		MateriaSource	&	operator=(const MateriaSource &myMateriaSource);

		
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		int		get_nb_AMlearned(void);
		
	protected :

		int			nb_AMlearned;
		AMateria	**learning_tab;
		
};

#endif