/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:38:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/24 12:03:35 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string.h>

class	Weapon
{
	public :
	
		Weapon(std::string weapon_type);
		~Weapon(void);
		
		const std::string	&getType(void);
		void				setType(std::string new_type);
		
	private :

		std::string	type;
};

#endif