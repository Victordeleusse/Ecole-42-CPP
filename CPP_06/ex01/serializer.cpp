/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:27:42 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/30 15:35:02 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer &mySerialize)
{
	*this = mySerialize;
	return ;
}

Serializer::~Serializer()
{
	return ;
}

Serializer	&	Serializer::operator=(const Serializer & mySerialize)
{
	(void)mySerialize;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

