/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:14:17 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/07 16:45:16 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

# ifndef BRAIN_CAPACITY
#  define BRAIN_CAPACITY 100
# endif

class Brain
{
	public :
	
		Brain(void);
		Brain(const Brain &myBrain);
		~Brain(void);
		int	get_nbBrains(void);
		std::string	*ideas;
	
		Brain	&	operator=(const Brain &myBrain);
	private :

		static int	_nb_brains;
		
};

#endif