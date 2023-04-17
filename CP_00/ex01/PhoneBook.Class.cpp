/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:06:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/17 12:36:09 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook (void)
{
	int	i = 0;
	
	std::cout << "Appel au constructeur !" << std::endl;
	this->nb_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "Appel au destructeur !" << std::endl;
	return ;
}

int	PhoneBook::ft_get_nbcontacts(void)
{
	return (this->nb_contacts);	
}

void	PhoneBook::ft_set_nbcontacts(void)
{
	if (this->nb_contacts < 8)
		this->nb_contacts++;
	return ;
}

void	PhoneBook::ft_add_contact(void)
{
	Contact	new_contact;
	int		nb_contacts = this->ft_get_nbcontacts();

	new_contact.ft_set_id(1);
	while (nb_contacts > 0)
	{
		this->contacts[nb_contacts] = this->contacts[nb_contacts - 1];
		nb_contacts--;
	}
	this->contacts[0] = new_contact;
	this->ft_set_nbcontacts();
	return ;
}

void	PhoneBook::ft_print_contacts(void)
{
	int	i = this->ft_get_nbcontacts();
	
	while (i > 0)
	{
		std::cout << "first name : " << this->contacts[i].
	}
	
}
