/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surcharge.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:46:34 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 16:31:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SURCHARGE_H
# define SURCHARGE_H

# include <iostream>

class Integer
{
	public :

		Integer(const int n);
		~Integer(void);

		int	getValue(void) const;
		
		Integer &	operator=(const Integer &myInteger); // Operateur d affectation
		Integer		operator+(const Integer &myInteger); // Operateur d addition
			
	private :

		int	n;
};

// std::ostream &	operator<<(std::ostream &o, const Integer &myInteger);

#endif
