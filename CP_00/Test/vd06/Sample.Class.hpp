/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:37:36 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 17:22:17 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

// PUBLIC et PRIVATE permette de gerer l'ENCAPSULATION DE NOS ATTRIBUTS OU FONCTIONS MEMBRES

// Il faut essayer de garder le maximum de donnees protegees en Private 

class Sample
{
private:
	
	int	_i;

	int _bar(int i);

public:

	char	c1;
	int		i1;
	
	Sample(char c, int i);
	~Sample();

	int	bar(int i);

};

#endif