/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:25:41 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 18:40:35 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string.h>

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
