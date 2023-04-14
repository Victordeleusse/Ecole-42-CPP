/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victor.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:41:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/13 17:36:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTOR_CLASS_H
# define VICTOR_CLASS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <iostream>

class Victor {

	public :

		int			var_int;
		static int	_all;

		Victor(int var_def);
		~Victor(void);
		
		int			ft_get_varint(Victor *instance);
		void		ft_incremente_nbinstance(int *nb);
		static int	_ft_get_nbinstance(void);	
	
	private :
	
		static int	_nb_instance_gen;
		void		ft_change_varint(int *nombre, int z);
		static void	_ft_change_id(Victor *instance, int z);
	
};


#endif
