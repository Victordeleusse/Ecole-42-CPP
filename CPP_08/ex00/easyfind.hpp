/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:05:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/12 18:23:51 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <stack>

class ElementNotFoundException : public std::exception
{
	public :
		virtual const char *what() const throw() {return("Element not found !");};		
};

template <typename T>
typename T::iterator	easyFind(T &myContainer, int toFind)
{	
	typename T::iterator	pos;
	
	pos = std::find(myContainer.begin(), myContainer.end(), toFind);
	if (pos != myContainer.end())
	{	
		std::cout << "Element well found \n";
		return (pos);
	}
	throw(ElementNotFoundException());
}

#endif