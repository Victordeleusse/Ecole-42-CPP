/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:31:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/10 17:37:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Derived.hpp"

int main(void)
{
	Derived	*d = new Derived();
	(void)d;
	delete d;
	Base	*b = new Base();
	(void)b;
	delete b;
	// Base	*test = new Derived();
	// (void)test;
	// delete test;
	return (0);
}
