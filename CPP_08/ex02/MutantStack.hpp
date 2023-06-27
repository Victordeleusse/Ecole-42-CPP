/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:11:26 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/27 17:48:57 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <deque>


template < typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public :

		MutantStack() {};
		MutantStack(const MutantStack &myMutantStack) {*this = myMutantStack;};
		~MutantStack() {};

		const MutantStack & operator=(const MutantStack &myMutantStack)
		{
			std::stack< T, C >::operator=(myMutantStack);
			return (*this);
		};
	
		typedef typename C::iterator			iterator;
		typedef typename C::reverse_iterator	reverse_iterator;


    	iterator	begin() {return(this->c.begin());}
    	iterator	end() {return(this->c.end());}
		reverse_iterator	rbegin() {return(this->c.rbegin());}
    	reverse_iterator	rend() {return(this->c.rend());}
		
};

#endif
