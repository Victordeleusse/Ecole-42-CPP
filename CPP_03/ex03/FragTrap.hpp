/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:38:17 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 14:32:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
	
		FragTrap(std::string name);
		FragTrap(const FragTrap &myFragTrap);
		~FragTrap(void);

		FragTrap	&	operator=(const FragTrap &myFragTrap);
	
		void	highFivesGuys(void);

	protected :
	
		FragTrap(void);

};

#endif