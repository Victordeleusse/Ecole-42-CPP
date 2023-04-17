/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:11:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/17 12:58:09 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact(void) 
{	
	std::cout << "Appel au constructeur !" << std::endl;
	ft_init_contact();
	return;
}

Contact::~Contact(void) 
{	
	std::cout << "Appel au destructeur !" << std::endl;
	return;
}

int	Contact::ft_get_id(void) 
{	
	return (this->id_contact);
}

void	Contact::ft_set_id(int number) 
{	
	if (0 < number && number < 9)
		this->id_contact = number;
	return ;
}

void	Contact::ft_init_contact(void) 
{	
	this->first_name = (const std::string)ft_init_strdata("first name (lowercase letters only)");
	this->last_name = (const std::string)ft_init_strdata("last name (lowercase letters only)");
	this->nickname = ft_init_strdata("nickname (lowercase letters only)");
	this->phone_number = ft_init_digitdata("phone number");
	this->darkest_secret = ft_init_strdata("darkest secret (lowercase letters only)");
	return ;
}

static int	is_a_valid_name(std::string name)
{
	if (name.empty())
		return (0);
	std::string::iterator it = name.begin();
	while (it != name.end())
	{
		if ('a' > *it || 'z' < *it)
			return (0);
		it++;
	}
	return (1);
}

static int	is_a_valid_number(std::string name)
{
	if (name.empty())
		return (0);
	std::string::iterator it = name.begin();
	while (it != name.end())
	{
		if ('0' > *it || '9' < *it)
			return (0);
		it++;
	}
	return (1);
}

std::string	Contact::ft_init_strdata(const std::string name)
{
	std::string	buffer;
	
	while (1) {
		std::cout << "Please enter your " << name << " : " << std::endl;
		std::getline (std::cin,buffer);
		if (is_a_valid_name(buffer))
			break;
		else
			std::cout << "Wrong entry parameter" << std::endl;
	}
	return (buffer);
}

std::string	Contact::ft_init_digitdata(const std::string name)
{
	std::string	buffer;
	
	while (1) {
		std::cout << "Please enter your " << name << " : " << std::endl;
		std::getline (std::cin,buffer);
		if (is_a_valid_number(buffer))
			break;
		else
			std::cout << "Wrong entry parameter" << std::endl;
	}
	return (buffer);
}

static std::string	ft_printLen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 3) + ".");
	return (str);
}

void	Contact::ft_view_contact(int id)
{
	std::cout << "|" << std::setw(10) << id << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->_first_name) << std::flush;
}