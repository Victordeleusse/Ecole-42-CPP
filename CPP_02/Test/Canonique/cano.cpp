/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cano.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:48:58 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 15:09:38 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cano.hpp"

Sample::Sample(int init) : n(init)
{
	return ;
}

Sample::~Sample(void)
{
	return ;
}

int	Sample::getValue(void)
{
	return(this->n);
}

Sample::Sample(const Sample &mySample)
{
	*this = mySample;
	return ;
}

Sample &	Sample::operator=(const Sample &mySample)
{
	this->n = mySample.getValue();
	return (*this);
}
