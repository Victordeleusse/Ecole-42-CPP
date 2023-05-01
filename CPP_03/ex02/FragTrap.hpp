/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:38:17 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/01 18:24:57 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
	
		FragTrap(std::string name);
		FragTrap(const FragTrap &myFragTrap);
		~FragTrap(void);

		FragTrap	&	operator=(const FragTrap &myFragTrap);
	
		void	highFivesGuys(void);
};

#endif