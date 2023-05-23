/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:27:29 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 16:05:33 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Form
{
	public :

		Form(std::string myName, int initGradeSign, int initGradeExec);
		Form(const Form &myForm);
		~Form();

		Form	&	operator=(const Form &myForm);
		
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeForSignature() const;
		int			getGradeForExecution() const;	
		
		void		beSigned(Bureaucrat myBureaucrat);
		
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
		
	private :

		const std::string	name;
		bool				isSigned;
		int					gradeForSignature;
		int					gradeForExecution;
};

std::ostream & operator<<(std::ostream&, const Form &myForm);

#endif