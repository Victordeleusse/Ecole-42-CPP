/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:02:47 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 12:08:49 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public :

		ShrubberyCreationForm(std::string myTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &myShrubbery);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&	operator=(const ShrubberyCreationForm & myShrubbery);

		void	execute(const Bureaucrat &executor) const;
				
};

#endif