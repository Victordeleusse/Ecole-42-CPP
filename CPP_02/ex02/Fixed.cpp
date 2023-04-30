/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:47:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 17:02:40 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_RawBits = 8;

Fixed::Fixed(void)
{
	this->number = 0;
	return ;
}

Fixed::Fixed(const Fixed &myFixed)
{
	this->number = myFixed.getRawBits();
	return ;
}

Fixed::Fixed(const int entier) : number(entier * (1 << _RawBits)) 
{
	return ;
}

Fixed::Fixed(const float flottant) : number(roundf(flottant * (1 << _RawBits)))
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed &	Fixed::operator=(const Fixed &myFixed)
{
	if (this != &myFixed)
		this->number = myFixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return(this->number);
}

void	Fixed::setRawBits(const int raw)
{
	this->number = raw;
	return ;
}

float 	Fixed::toFloat(void) const
{
	return ((float)this->number / (1 <<_RawBits));
}

int	Fixed::toInt(void) const 
{
	return (this->number >> _RawBits);
}

std::ostream &	operator<<(std::ostream &output, const Fixed &myFixed)
{
	output << myFixed.toFloat();
	return (output);
}

//////////////////// Comparison operators //////////////////// 

bool	Fixed::operator>(const Fixed &myFixed)
{	
	return (this->getRawBits() > myFixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &myFixed)
{	
	return (this->getRawBits() < myFixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &myFixed)
{	
	return (this->getRawBits() >= myFixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &myFixed)
{	
	return (this->getRawBits() <= myFixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &myFixed)
{	
	return (this->getRawBits() == myFixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &myFixed)
{	
	return (this->getRawBits() != myFixed.getRawBits());
}

//////////////////// Arithmetic operators //////////////////// 

Fixed	Fixed::operator+(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() + myFixed.toFloat());
	
	return (result);
}

Fixed	Fixed::operator-(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() - myFixed.toFloat());
	
	return (result);
}

Fixed	Fixed::operator*(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() * myFixed.toFloat());
	
	return (result);
}

Fixed	Fixed::operator/(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() / myFixed.toFloat());
	
	return (result);
}

//////////////////// Inc./Dec. operators //////////////////// 

Fixed	&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + this->getRawBits());
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	
	++temp;
	return(temp);
}