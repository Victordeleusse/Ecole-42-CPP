/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:24:14 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 17:50:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public :

		Fixed(void);
		Fixed(const Fixed &myFixed);
		~Fixed(void);
		
		Fixed &	Fixed::operator=(const Fixed &myFixed);
		
		int const	getRawBits(void);
		void		setRawBits(const int raw);

	private :
	
		int					number;
		static const int	_width;

};


#endif