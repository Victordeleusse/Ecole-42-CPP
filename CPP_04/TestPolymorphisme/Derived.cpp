/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derived.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:30:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 17:31:31 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Derived.hpp"

Derived::Derived(void)
{
	std::cout << "Derived Constructor called" << std::endl;
	return ;
}

Derived::~Derived(void)
{
	std::cout << "Derived Destructor called" << std::endl;
	return ;
}

