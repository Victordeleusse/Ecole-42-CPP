/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cano.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:42:14 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 12:06:20 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANO_H
# define CANO_H

class Sample
{
	public :

		Sample(int	init);	//constructeur
		~Sample(void);	//destructeur
		Sample(const Sample &mySample);	//constructeur par copie
		
		Sample &	operator=(const Sample &mySample); //operator d'assignation -> Renvoie un pointeur 
		
		int	getValue(void);
		
	private :
	
		int	n;
}

#endif