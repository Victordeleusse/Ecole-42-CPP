/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:25:24 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:45:29 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	freeDocs(Form **docs)
{
	int	i = 0;
	// int	size = (sizeof(docs) / sizeof(Form *));
	int size = 5;
	while (i < size)
	{	
		if (docs[i])
			delete docs[i];
		i++;
	}
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
		// Doc3 = new RobotomyRequestForm("Usine2");
		// Doc4 = new PresidentialPardonForm("Augustin");
		
		Intern	Intern1;
		Intern	Intern2;
		
		Doc4 = Intern1.makeForm("presidential pardon", "Augustin");		
		Doc3 = Intern2.makeForm("contrat bidon", "anonyme");
		
		Form	*DocArray[5] = {Doc1, Doc2, Doc3, Doc4, NULL};
			
		std::cout << std::endl;
		std::cout << "----INIT STATEMENT----\n";
		int i = 0;
		while (i < 4)
		{	
			if (!DocArray[i])
				i++;
			else
				std::cout << *DocArray[i++];
		}
		
		std::cout << std::endl;
		std::cout << "----ACTIONS----\n";
		DocArray[0]->beSigned(Victor);
		DocArray[0]->execute(Jeanne);
		DocArray[1]->beSigned(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		DocArray[1]->execute(Victor);
		DocArray[3]->beSigned(Victor);
		DocArray[3]->execute(Victor);
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