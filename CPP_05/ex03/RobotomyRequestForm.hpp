/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:00:53 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/24 20:13:13 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public :
		
		RobotomyRequestForm(std::string myTarget);
		RobotomyRequestForm(const RobotomyRequestForm &myRobotomy);
		~RobotomyRequestForm();
				
		RobotomyRequestForm	&	operator=(const RobotomyRequestForm &myRobotomy);

		void	execute(const Bureaucrat &executor) const;

	private :
		
		static int	_round;

};

#endif