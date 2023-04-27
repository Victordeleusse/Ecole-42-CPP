/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:08:32 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/27 09:47:20 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_width = 8;

Fixed::Fixed(void): number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed	& myFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = myFixed.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	& Fixed::operator=(const Fixed	& myFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this->number && this->number != myFixed.getRawBits())
		this->number = myFixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->number);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
	return ;
}
