/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:25:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/29 17:10:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Victor("Victor", 1);
		Bureaucrat Antoine("Antoine", 130);
		Bureaucrat Jeanne("Jeanne", 2);
		Bureaucrat Pierre("Pierre", 20);
		Form	Doc1("Doc1", 10, 10);
		Form	Doc2("Doc2", 10, 100);
		Form	Doc3("Doc3", 1, 150);
		
		
		std::cout << std::endl;
		std::cout << "----INIT STATEMENT----\n";
		std::cout << Doc1;
		std::cout << Doc2;
		std::cout << Doc3;
		
		std::cout << std::endl;
		std::cout << "----ACTIONS----\n";
		Victor.signForm(Doc1);
		Doc1.beSigned(Jeanne);
		Doc2.beSigned(Victor);
		Doc3.beSigned(Victor);
		
		std::cout << std::endl;
		std::cout << "----STATEMENT----\n";
		std::cout << Doc1;
		std::cout << Doc2;
		std::cout << Doc3;
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
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