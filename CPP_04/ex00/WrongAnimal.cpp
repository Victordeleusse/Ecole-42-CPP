/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:56:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 11:58:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal("WrongAnimal")
{
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &myWrongAnimal) : Animal()
{
	*this = 
}