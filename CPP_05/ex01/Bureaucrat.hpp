/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:25:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/20 19:48:28 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string.h>

class Bureaucrat
{
	public :
	
		// Bureaucrat(void);
		Bureaucrat(const std::string myName, int grade);
		Bureaucrat(const Bureaucrat &myBureaucrat);
		~Bureaucrat(void);

		int			getGrade(void) const;		
		std::string	getName(void) const;

		Bureaucrat	&	operator=(const Bureaucrat &myBureaucrat);
	
		void	upgradeBureaucrat(void);
		void	downgradeBureaucrat(void);
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception: Grade is to high");
				}
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Bureaucrat::exception: Grade is to low"); 
				}
		};
		class	InitGradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception: Grade is to high - Bureaucrat destroyed");
				}
		};
		class	InitGradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Bureaucrat::exception: Grade is to low - Bureaucrat destroyed"); 
				}
		};
		
	private :
	
		const std::string	name;
		int					grade;
	
};

std::ostream& operator<<(std::ostream&, const Bureaucrat &myBureaucrat);

#endif
