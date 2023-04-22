/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:26:49 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/22 16:01:55 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string.h>


class Zombie{

	public :
		
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		
	private :
	
		std::string	name;
		
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
