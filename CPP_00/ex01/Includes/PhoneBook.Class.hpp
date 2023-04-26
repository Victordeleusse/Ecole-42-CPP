/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:02:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 09:54:00 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <istream>
# include <string>
# include <stdlib.h> 
# include "Contact.Class.hpp"

class PhoneBook {
	
	public :

		PhoneBook(void);
		~PhoneBook(void);
		
		int		ft_get_nbcontacts(void);
		void	ft_add_contact(void);
		void	ft_search_contact(void);
	
	private :
	
		int		nb_contacts;
		Contact	contacts[8];
		
		void	ft_set_nbcontacts(void);
		Contact	*ft_get_contact(int idx);
		void	ft_display_contact(void);
};

#endif
