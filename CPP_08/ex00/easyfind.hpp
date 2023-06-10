/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:05:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/10 16:19:39 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class ElementNotFoundException : public std::exception
{
	public :
		virtual const char *what() const throw() {return("Element not found !");};		
};

template <typename T>
void	easyFind(T myContainer, int toFind)
{
	size_t	pos = 0;
	
	for(typename T::iterator it = myContainer.begin(); it != myContainer.end(); it++)
	{
		pos++;
		if (*it == toFind)
		{	
			std::cout << "Element found in position : " << pos << std::endl;
			return ; 
		}
	}
	throw(ElementNotFoundException());
	return ;
}

#endif