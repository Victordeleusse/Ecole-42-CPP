/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:46:34 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 12:47:58 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	public :

		Fixed(void);
		Fixed(const Fixed	&myFixed);
		~Fixed(void);
		
		Fixed(const int entier);
		Fixed(const float flottant);

		Fixed &	operator=(const Fixed &myFixed);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;

	private :
	
		int					number;
		static const int	_RawBits;

};

std::ostream &	operator<<(std::ostream &output, const Fixed &myFixed);

#endif
