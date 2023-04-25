/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:10:55 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 15:51:11 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string.h>

class Harl
{
	typedef void (Harl::*ptr_complain)(void);
	
	public :

		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);
		void	ft_exec(int i, ptr_complain *ft_instructions, std::string *instructions);
		
	private :
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif