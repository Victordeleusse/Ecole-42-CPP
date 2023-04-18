/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:41:08 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 20:30:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

// Implementation d ACCESSEUR et d ASSESSEUR

// Implementation de fonctions et de variables NON MEMBRES -> Utilisation du mot cle STATIC
// Ces fonctions et variables appartiennent non plus aux instances definies mais a la classe en elle meme

class Sample
{

private:

	int			_foo;
	static int	_nbInstance;

public:
	
	int			var_int;
	
	Sample(int value);
	~Sample(void);

	int			getfoo(void)const;
	int			ft_compare(Sample *instance_s)const;
	void		ft_incremente(int *nb);
	static int	_ft_get_nbInstance(void);

};


#endif