/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:25:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:14:40 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public :
	
		PresidentialPardonForm(std::string myTarget);
		PresidentialPardonForm(const PresidentialPardonForm &myPresidential);
		~PresidentialPardonForm();
		
		PresidentialPardonForm	&	operator=(const PresidentialPardonForm &myPresidential);	
	
		void	execute(const Bureaucrat &executor) const;
		
};

#endif