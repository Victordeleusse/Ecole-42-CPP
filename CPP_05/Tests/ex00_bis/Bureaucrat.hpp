/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:45:22 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/23 13:08:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
	private :
		
		const std::string	name;
		unsigned int		grade;
	
	public :

		Bureaucrat(const std::string myName, unsigned int myGrade);
		Bureaucrat(const Bureaucrat &myBureaucrat);
		~Bureaucrat();


		unsigned int	getGrade(void) const;
		std::string		getName(void) const;
		
		void	upgradeBureaucrat(void);
		void	downgradeBureaucrat(void);
		
		Bureaucrat	&	operator=(const Bureaucrat &myBureaucrat);
	
	class GradeTooHighException :  public std::exception
	{
		public :
			virtual const char *what() const throw()
				{
					return("Bureaucrat::exception: Grade is to high"); 
				}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{	
				return("Bureaucrat::exception: Grade is to low");
			}
	};
};

std::ostream& operator<<(std::ostream&, const Bureaucrat &myBureaucrat);

#endif