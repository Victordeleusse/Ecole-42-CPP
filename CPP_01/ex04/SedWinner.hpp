/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedWinner.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:36:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/08 11:46:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDWINNER_H
# define SEDWINNER_H

# include <iostream>
# include <fstream>
# include <string>

class	MySed
{
	private :
	
		std::string	infile;
		std::string	outfile;

	public :
		
		MySed(std::string filename);
		~MySed(void);
		
		std::string	get_infile(void);
		void		ft_replace(std::string s1, std::string s2);
	
};

std::string	ft_clean_line(std::string line, std::string s1, std::string s2);

#endif
