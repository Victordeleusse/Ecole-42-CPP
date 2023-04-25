/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:04:05 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 11:31:11 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string.h>


class Harl
{

	public :
		
		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);

	private :

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif