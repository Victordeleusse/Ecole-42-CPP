/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:50:21 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/05 15:42:17 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public :
		
		WrongCat(void);
		WrongCat(const WrongCat &myWrongCat);
		~WrongCat(void);
		
		WrongCat & operator=(const WrongCat &myWrongCat);
};

#endif