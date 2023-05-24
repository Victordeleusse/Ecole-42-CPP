/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:27:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 11:47:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <stdbool.h>

class Form
{
	public :

		Form(std::string myName, int initGradeSign, int initGradeExec, std::string myTarget);
		Form(const Form &myForm);
		~Form();

		Form	&	operator=(const Form &myForm);
		
		virtual std::string	getName() const;
		std::string			getTarget() const;
		bool				getIsSigned() const;
		int					getGradeForSignature() const;
		int					getGradeForExecution() const;	
		
		void	beSigned(Bureaucrat myBureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class IsNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		
		virtual void	execute(const Bureaucrat &executor) const = 0;
		bool			bureaucratCanExecute(const Bureaucrat &executor) const;
		
	private :

		const std::string	name;
		bool				isSigned;
		int					gradeForSignature;
		int					gradeForExecution;
		std::string			target;
};

std::ostream & operator<<(std::ostream&, const Form &myForm);

#endif