/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:47:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/27 10:58:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	_width = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
	return ;
}

Fixed::Fixed(const Fixed &myFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = myFixed.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(const Fixed &myFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = myFixed.getRawBits();
	return (*this);
}


