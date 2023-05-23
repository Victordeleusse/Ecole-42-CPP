/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:12:31 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 10:11:05 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_H
# define DIAMONTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public :

		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &myDiamondTrap);
		~DiamondTrap(void);

		DiamondTrap & operator=(const DiamondTrap &myDiamondTrap);
		
		void		whoAmI();
		using 		ScavTrap::attack;
	
	private :

		DiamondTrap( void );
		
		std::string	name;

};

#endif