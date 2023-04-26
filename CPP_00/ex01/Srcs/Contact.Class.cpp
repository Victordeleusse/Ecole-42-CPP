/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:11:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/26 10:08:36 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact(void) 
{	
	return;
}

Contact::~Contact(void) 
{	
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

void	Contact::ft_init_contact(int number) 
{	
	this->first_name = ft_init_strdata("first name (lowercase letters only)");
	this->last_name = ft_init_strdata("last name (lowercase letters only)");
	this->nickname = ft_init_strdata("nickname (lowercase letters only)");
	this->phone_number = ft_init_digitdata("phone number (no space)");
	this->darkest_secret = ft_init_strsecret("darkest secret");
	this->ft_set_id(number);
	return ;
}

static int	is_a_valid_name(std::string name)
{
	if (name.empty())
		return (0);
	std::string::iterator it = name.begin();
	while (it != name.end())
	{
		if (('a' > *it || 'z' < *it) && *it != ' ')
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
	std::string	buffer = "";
	
	while (1)
	{
		std::cout << "Please enter your " << name << " : " << std::flush << std::endl;
		if (!(std::getline(std::cin, buffer)))
			exit(1);
		std::cout << std::flush << std::endl;
		if (is_a_valid_name(buffer) && buffer != "")
			break;
		else if (buffer == "")
			std::cout << "Sorry, can't be empty !" << std::flush << std::endl;
		else
			std::cout << "Wrong entry parameter" << std::endl;
	}
	return (buffer);
}

std::string	Contact::ft_init_strsecret(const std::string name)
{
	std::string	buffer = "";
	std::cin.clear();
	
	while (buffer == "")
	{
		std::cout << "Please enter your " << name << " : " << std::flush << std::endl;
		if (!(std::getline(std::cin, buffer)))
			exit(1);
		std::cout << std::flush << std::endl;
		if (buffer == "")
			std::cout << "Sorry, can't be empty !" << std::flush << std::endl;
		else 
			break;
	}
	return (buffer);
}

std::string	Contact::ft_init_digitdata(const std::string name)
{
	std::string	buffer = "";
	std::cin.clear();
	
	while (1) {
		std::cout << "Please enter your " << name << " : " << std::flush << std::endl;
		if (!(std::getline(std::cin, buffer)))
			exit(1);
		std::cout << std::flush << std::endl;
		if (is_a_valid_number(buffer) && buffer.length() == 10)
			break;
		else if (buffer == "")
			std::cout << "Sorry, can't be empty !" << std::flush << std::endl;
		else
			std::cout << "Wrong entry parameter" << std::endl;
	}
	return (buffer);
}

static std::string	ft_printLen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::ft_view_contact(void)
{
	std::cout << std::setw(10) << this->id_contact << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->first_name) << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->last_name) << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->nickname) << std::flush;
	std::cout << std::endl;
	return ;
}

void	Contact::ft_display_full_contact(void)
{
	std::cout << std::endl;
	std::cout << "     ---------------- CONTACT DISPLAY ----------------" << std::endl;
	std::cout << "first name : " << this->first_name << std::flush << std::endl;
	std::cout << "last name : " << this->last_name << std::flush << std::endl;
	std::cout << "nickname : " << this->nickname << std::flush << std::endl;
	std::cout << "phone number : " << this->phone_number << std::flush << std::endl;
	return ;
}
