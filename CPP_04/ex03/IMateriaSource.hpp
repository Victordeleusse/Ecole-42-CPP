/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:54:15 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 16:12:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

// CLASSE ABSTRAITE -> INTERFACE

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

		virtual int	get_nb_AMlearned(void) = 0;
};

#endif