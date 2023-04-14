/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:02:45 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/14 18:41:39 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
# include "Contact.Class.hpp"

class PhoneBook {
	
	public :

		PhoneBook(void);
		~PhoneBook(void);
	
	private :
	
		int		nb_contacts;
		Contact	directory[9];
		
		int		ft_get_nbcontacts(void) const;
		void	ft_add_contact(void);
		void	ft_remove_contact(void);
		void	ft_print_contacts(void) const;
		void	ft_search_contact(void) const; // On bloque la possibilite de modifie l output si l utilisation se fait avec un CAST
		
}

#endif
