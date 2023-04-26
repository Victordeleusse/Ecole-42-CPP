/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:08:32 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 17:59:59 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_width = 0;

Fixed::Fixed(void): number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &myFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = myFixed.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

const int	Fixed::getRawBits(void)
{
	return(this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
	return ;
}

Fixed	& Fixed::operator=(const Fixed &myFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this->number && this->number != myFixed.getRawBits())
		this->number = myFixed.getRawBits();
	return (*this);
}
