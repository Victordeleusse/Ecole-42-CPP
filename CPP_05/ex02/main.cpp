/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:25:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 15:49:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

void	freeDocs(Form **docs)
{
	int	i = 0;
	while (docs[i])
		delete docs[i++];
	return ;
}

int	main(void)
{
	Form	*Doc1 = NULL;
	Form	*Doc2 = NULL;
	Form	*Doc3 = NULL;
	Form	*Doc4 = NULL;
	try
	{
		Bureaucrat Victor("Victor", 1);
		Bureaucrat Antoine("Antoine", 130);
		Bureaucrat Jeanne("Jeanne", 20);
		Bureaucrat Pierre("Pierre", 75);
		
		Doc1 = new ShrubberyCreationForm("Foret_de_Reichshoffen");
		Doc2 = new RobotomyRequestForm("Usine1");
		Doc3 = new RobotomyRequestForm("Usine2");
		Doc4 = new PresidentialPardonForm("Augustin");
		
		Form	*DocArray[5] = {Doc1, Doc2, Doc3, Doc4, NULL};
		
		std::cout << std::endl;
		std::cout << "----INIT STATEMENT----\n";
		int i = 0;
		while (i < 4)
			std::cout << *DocArray[i++];
		
		std::cout << std::endl;
		std::cout << "----ACTIONS----\n";
		DocArray[0]->beSigned(Victor);
		DocArray[0]->execute(Jeanne);
		DocArray[1]->beSigned(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		// DocArray[1]->execute(Victor);
		// Victor.executeForm(*Doc4);
		
		std::cout << std::endl;
		std::cout << "----STATEMENT----\n";

		std::cout << std::endl;
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
	catch(Form::IsNotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form	*DocArrayBis[5] = {Doc1, Doc2, Doc3, Doc4, NULL};
	freeDocs(DocArrayBis);
	return (0);
}