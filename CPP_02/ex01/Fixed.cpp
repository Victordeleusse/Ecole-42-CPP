/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:47:11 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/30 15:58:06 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_RawBits = 8;

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

Fixed::Fixed(const int entier) : number(entier * (1 << _RawBits)) // si on m'envoie un entier, aucun probleme -> stockage directement
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float flottant) : number(roundf(flottant * (1 << _RawBits)))// si on m'envoie un flottant -> bitshifting pour stocker "toute la data"
{
	std::cout << "Float constructor called" << std::endl;
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

float 	Fixed::toFloat(void) const // On me demande de renvoyer le nombre en float -> bitshift vers la droite du meme "decalage"
{
	return ((float)this->number / (1 <<_RawBits));
}

int	Fixed::toInt(void) const // Si on me demande de renvoyer l entier tel quel
{
	return (this->number >> _RawBits);
}

std::ostream &	operator<<(std::ostream &output, const Fixed &myFixed)
{
	output << myFixed.toFloat();
	return (output);
}
