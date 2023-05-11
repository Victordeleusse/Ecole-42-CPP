/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:58:33 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 15:01:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

class Character : public ICharacter
{
	public :
	
		Character(std::string name);
		Character(const Character &myCharacter);
		~Character(void);

		Character & operator=(const Character &myCharacter);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	protected :
	
		std::string	name;
		AMateria	**tab;
		int	nb_AMpresents;
		
};

#endif