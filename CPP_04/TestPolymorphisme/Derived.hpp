/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derived.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:26:30 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 17:30:36 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DERIVED_H
# define DERIVED_H

# include "Base.hpp"

class Derived : public Base
{
	public :

		Derived(void);
		~Derived(void);

};


#endif