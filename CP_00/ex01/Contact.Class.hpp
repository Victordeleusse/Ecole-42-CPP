/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:51 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/17 12:49:31 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

	public :
		
		Contact(void);
		~Contact(void);

		int		ft_get_id(void);
		void	ft_set_id(int number);
		void	ft_view_contact(int id);
		void	ft_display_contact(int id);

	private :
	
		int					id_contact;
		const std::string	first_name;
		const std::string	last_name;
		std::string			nickname;
		std::string			phone_number;
		std::string			darkest_secret;
		
		void		ft_init_contact(void); //Je ne veux pas qu on puisse initialiser un contact en dehors de ma classe.
		std::string	ft_init_strdata(const std::string name);
		std::string	ft_init_digitdata(const std::string name);
		
};

#endif