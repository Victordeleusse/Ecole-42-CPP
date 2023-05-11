/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:51:00 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 12:49:54 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

// CLASSE ABSTRAITE -> INTERFACE

#include "Character.hpp"

class ICharacter
{
	public:
		
		virtual ~ICharacter() {} // creation d un destructor sur ICharacter car on va surement devoir generer des ptr *ICharac = new Character();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif