/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:13:08 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 17:11:59 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string.h>

class Zombie 
{
	
	public :

		Zombie(void);
		~Zombie(void);
		
		void	ft_set_name(std::string name);
		void	ft_anounce(int idx);
		
	private : 
		
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif