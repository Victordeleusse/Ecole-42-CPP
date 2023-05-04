/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:12:31 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/04 18:29:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_H
# define DIAMONTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &myDiamondTrap);
		~DiamondTrap(void);

		DiamondTrap & operator=(const DiamondTrap &myDiamondTrap);
		
		void		whoAmI();
		using 		ScavTrap::attack;

	private :

		std::string	name;
	
};

#endif