/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grand.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:40:35 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/30 18:07:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAND_H
# define GRAND_H

# include <iostream>
# include <unistd.h>
# include <string.h>
# include <stdbool.h>
# include <cstdlib>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

class Base
{
	public :
		virtual ~Base(){};
};

class A : public Base {		
};

class B : public Base {
};

class C : public Base {
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif