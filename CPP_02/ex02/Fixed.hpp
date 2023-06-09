/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:35:01 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 18:26:27 by vde-leus         ###   ########.fr       */
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
		Fixed(const Fixed &myFixed);
		~Fixed(void);
		
		Fixed(const int entier);
		Fixed(const float flottant);
		
		Fixed	&	operator=(const Fixed &myFixed);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;

		Fixed	operator+(const Fixed &myFixed);
		Fixed	operator-(const Fixed &myFixed);
		Fixed	operator*(const Fixed &myFixed);
		Fixed	operator/(const Fixed &myFixed);

		bool	operator>(const Fixed &myFixed);
		bool	operator<(const Fixed &myFixed);
		bool	operator>=(const Fixed &myFixed);
		bool	operator<=(const Fixed &myFixed);
		bool	operator==(const Fixed &myFixed);
		bool	operator!=(const Fixed &myFixed);

		Fixed	&	operator++(void);				//Prefix increment operator.
		Fixed	operator++(int);					//Postfix increment operator.
		Fixed	&	operator--(void);				//Prefix decrement operator.
		Fixed	operator--(int);					//Postfix decrement operator.
		
		static Fixed		&	_min(Fixed &nbFix_1, Fixed &nbFix_2);
		static const Fixed	&	_min_const(const Fixed &nbFix_1, const Fixed &nbFix_2);
		static Fixed		&	_max(Fixed &nbFix_1, Fixed &nbFix_2);
		static const Fixed	&	_max_const(const Fixed &nbFix_1, const Fixed &nbFix_2);
		
	private :

		int					number;
		static const int	_RawBits;	
};

std::ostream	&	operator<<(std::ostream &output, const Fixed &myFixed); 

#endif
