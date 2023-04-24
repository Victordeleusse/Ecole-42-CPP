/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:57:53 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 10:41:17 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public :
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void	attack();
		void	setType(Weapon weapon_type);
		Weapon	getWeaponA(void);
		
	private :

		std::string	name;
		Weapon		&weapon_type;	
};

#endif