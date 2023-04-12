/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:58:43 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 20:30:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

Sample::Sample(int value): _foo(value), var_int(42)
{
	std::cout << "Appel du constructeur !" << std::endl;
	ft_incremente(&Sample::_nbInstance);
	return ;
	
}

Sample::~Sample(void)
{
	std::cout << "Appel du destructeur !" << std::endl;
	return ;
	
}

int Sample::getfoo(void)const
{
	return (this->_foo);
	
}

int Sample::ft_compare(Sample *instance_s) const
{
	if (this->_foo < instance_s->getfoo())
		return (-1);
	else 
		return (1);
			
}

void	Sample::ft_incremente(int *nb)
{
	*nb = *nb + 1;
	return ;
	
}

int	Sample::_ft_get_nbInstance(void)
{
	return (Sample::_nbInstance);
}

int	Sample::_nbInstance = 0;
