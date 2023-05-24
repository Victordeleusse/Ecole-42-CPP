/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:29:39 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:15:30 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"

class Intern
{

	public :
	
		Intern();
		Intern(const Intern &myInter);
		~Intern();

		Intern	&	operator=(const Intern &myIntern);

		Form	*makeForm(std::string formName, std::string target);
		
		Form	*makeRRF(std::string target);
		Form	*makePPF(std::string target);
		Form	*makeSCF(std::string target);
};

#endif