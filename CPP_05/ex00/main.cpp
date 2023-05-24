/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:25:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 18:40:31 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat *Victor = new Bureaucrat("Victor", 1);
		// Bureaucrat Jean("Jean", 0);

		Bureaucrat Victor("Victor", 1);
		Bureaucrat Antoine("Antoine", 150);
		Bureaucrat Jeanne("Jeanne", 2);
		Bureaucrat Pierre("Pierre", 3);
		Bureaucrat Augustin("Augustin", 150);
		
		std::cout << std::endl;
		std::cout << "----AFFICHAGE----\n";
		std::cout << Victor;
		std::cout << Antoine;
		std::cout << Jeanne;
		std::cout << Pierre;
		std::cout << Augustin;
		
		std::cout << std::endl;
		std::cout << "----MODIFS----\n";
		Victor.upgradeBureaucrat();
		std::cout << Victor;
		Pierre.upgradeBureaucrat();
		std::cout << Pierre;
		Antoine.downgradeBureaucrat();
		std::cout << Antoine;
		// delete Victor;
	}
	catch(Bureaucrat::InitGradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::InitGradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}