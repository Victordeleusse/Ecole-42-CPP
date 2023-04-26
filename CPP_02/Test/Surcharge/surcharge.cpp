/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surcharge.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:07:15 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 18:10:00 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "surcharge.hpp"

Integer::Integer(const int new_number) : n(new_number)
{
	std::cout << "Appel du constructeur !" << std::endl;
	return;
}

Integer::Integer(const Integer &rhs) 
{
	std::cout << "Appel du constructeur par copie !" << std::endl;
	*this = rhs;
	return;
}

Integer::~Integer(void)
{
	std::cout << "Appel du destructeur !" << std::endl;
	return;
}

int	Integer::getValue(void) const
{
	return (this->n);
}

Integer &	Integer::operator=(const Integer &myInteger)
{
	std::cout << "Assignation operator called to get a new value of my Integer : " << this->n \
<< "to " << myInteger.getValue() << std::endl;
	this->n = myInteger.getValue();
	return (*this);	
}

Integer	Integer::operator+(const Integer &myInteger)
{
	std::cout << "Operation + operator called to get a new value of my Integer : " << std::endl;
	return(Integer(this->n + myInteger.getValue())); // Renvoie une copie -> perte de memoire mais pas d autre solution
}

// std::ostream	&operator<<(std::ostream &o, const Integer &myInteger)
// {
// 	o << myInteger.getValue();
// 	return (o);
// }

