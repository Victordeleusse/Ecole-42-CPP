/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:29:27 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 17:30:29 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{
	std::cout << "Base Constructor called" << std::endl;
	return ;
}

Base::~Base(void)
{
	std::cout << "Base Destructor called" << std::endl;
	return ;
}