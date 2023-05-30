/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grand.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:40:38 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/30 18:08:47 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grand.hpp"

Base *generate(void)
{
	srand((unsigned) time(NULL));
	int i = rand() % 3;
	std::cout << "random : " << i << std::endl;
	sleep(1);
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined type" << std::endl;	
	return ;
}

// You cannot verify the success of a dynamic cast using reference types by comparing 
// the result (the reference that results from the dynamic cast) with zero because
// there is no such thing as a zero reference. 

// A failing dynamic cast to a reference type throws a bad_cast exception.

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	
}