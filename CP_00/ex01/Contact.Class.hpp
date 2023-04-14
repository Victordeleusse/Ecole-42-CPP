/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:51 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 18:50:08 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
#include <string>

class Contact {

	public :
		
		Contact(void);
		~Contact(void);

		void	ft_init_contact(void);
		int		ft_get_id(void);		

	private :
	
		int					id_contact;
		const std::string	first_name;
		const std::string	last_name;
		std::string			nickname;
		std::string			phone_number;
		std::string			darkest_secret;
		
}


#endif