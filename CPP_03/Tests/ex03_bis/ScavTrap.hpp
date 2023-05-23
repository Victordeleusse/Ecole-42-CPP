/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:36:25 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 10:13:33 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public : 
		
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &myScavTrap);
		~ScavTrap(void);

		ScavTrap	&	operator=(const ScavTrap &myScavTrap);		

		void	guardGate(void);
		void	attack(const std::string& target);

	protected :

		ScavTrap(void);

		unsigned int	hit_points;
		unsigned int	attack_damage;
};

#endif
