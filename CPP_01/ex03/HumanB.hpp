/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:45:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 11:49:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public :

		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon weapon);
		void	attack(void);

	private :
	
		Weapon		*weapon;
		std::string	name;	
};

#endif