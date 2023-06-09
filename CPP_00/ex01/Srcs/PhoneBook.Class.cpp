/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:06:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 10:11:02 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook (void)
{
	std::cout << std::endl;
	this->nb_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "\t\tBye Bye !\n" << std::endl;
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

Contact	*PhoneBook::ft_get_contact(int idx)
{
	return(&this->contacts[idx - 1]);
}

void	PhoneBook::ft_add_contact(void)
{
	static int	count = 0;
	int			nb_contacts = this->ft_get_nbcontacts();

	if (nb_contacts < 8)
		this->contacts[nb_contacts].ft_init_contact(nb_contacts + 1);
	else
	{
		if (count > 7)
			count = 0;
		this->contacts[count].ft_init_contact(count + 1);
		count++;
	}
	this->ft_set_nbcontacts();
	return ;
}

static int	ft_is_valid_index(int idx, PhoneBook *directory)
{
	int	nb = directory->ft_get_nbcontacts();
	
	if ((idx > nb) || (idx <= 0))
		return (0);
	return (1);
}

static int	ft_easy_atoi(std::string buffer)
{
	if (buffer.length() != 1)
		return (-1);
	if ('0' > *buffer.begin() || '9' < *buffer.begin())
		return (-1);
	return (*buffer.begin() - '0');
}

void	PhoneBook::ft_display_contact(void)
{
	std::string	buffer;
	int			searched_id = 0;

	while(1)
	{
		std::cout << "\nPlease enter the searched contact index : ";
		if (!(std::getline(std::cin, buffer)))
			exit(1);
		searched_id = ft_easy_atoi(buffer);
		if (ft_is_valid_index(searched_id, this))
			break;
		else
			std::cout << "Please enter a valid index !" << std::endl;
	}
	(*(this->ft_get_contact(searched_id))).ft_display_full_contact();
	return ;
}

void	PhoneBook::ft_search_contact(void)
{
	int	i = this->ft_get_nbcontacts();
	
	if (i == 0)
	{	
		std::cout << "\t\tEmpty Directory\n" << std::endl;
		return;
	}
	while (i > 0)
		this->contacts[--i].ft_view_contact();
	this->ft_display_contact();
	return ;
}


