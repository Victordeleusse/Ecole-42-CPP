/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_test_00.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:26:52 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/11 18:56:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <iostream>

int	gl_var = 1;
int	f(void){return 4;}

namespace Foo {

	int	gl_var = 3;
	int	f(void){return 12;}
	
}

namespace Bar {

	int	gl_var = 9;
	int	f(void){return 36;}
	
}

// Aliasing de namespace
namespace Muf = Bar;

// Operateur de resolution de portee
int	main(void) {

	printf("gl_var value : 		%d\n", gl_var);
	printf("function return value : %d\n\n", f());

	printf("In Foo->gl_var value : 		%d\n", Foo::gl_var);
	printf("In Foo->function return value : %d\n\n", Foo::f());
	
	printf("In Bar->gl_var value : 		%d\n", Bar::gl_var);
	printf("In Bar->function return value : %d\n\n", Bar::f());
	
	printf("In Muf->gl_var value : 		%d\n", Muf::gl_var);
	printf("In Muf->function return value : %d\n\n", Muf::f());

	return (0);
}

