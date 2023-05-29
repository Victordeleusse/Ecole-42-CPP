/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:25:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/29 17:16:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string.h>
# include <stdbool.h>
# include <fstream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
	
		Bureaucrat(const std::string myName, int grade);
		Bureaucrat(const Bureaucrat &myBureaucrat);
		~Bureaucrat(void);

		int			getGrade(void) const;		
		std::string	getName(void) const;

		Bureaucrat	&	operator=(const Bureaucrat &myBureaucrat);
	
		void	upgradeBureaucrat(void);
		void	downgradeBureaucrat(void);

		void	signForm(Form &myForm);
		void	executeForm(Form const & form);
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	InitGradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	InitGradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
	private :
	
		const std::string	name;
		int					grade;
	
};

std::ostream& operator<<(std::ostream&, const Bureaucrat &myBureaucrat);

#endif
