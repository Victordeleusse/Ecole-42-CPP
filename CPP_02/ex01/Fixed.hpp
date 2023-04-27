/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:46:34 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/27 10:50:43 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public :

		Fixed(void);
		Fixed(const Fixed	&myFixed);
		~Fixed(void);

		Fixed &	operator=(const Fixed &myFixed);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

	private :
	
		int					number;
		static const int	_width;

};

#endif
