/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Directory.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:13:48 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/18 19:06:26 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

static void	ft_display_rules(void)
{
	std::cout << "_________WELCOME TO MY OWN DIRECTORY_________" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Please find below the operating rules." << std::endl;
	std::cout << "	- Enter ADD to add a new contact" << std::endl;
	std::cout << "	- Enter SEARCH to display all contacts and search one" << std::endl;
	std::cout << "	- Enter EXIT to quit the directory" << std::endl;
	std::cout << std::endl;
	return ;
}

static void	ft_get_order(std::string *input)
{
	std::cout << "\nINSTRUCTION -> ";
	std::cin >> *input;
	std::cout << std::endl;
	return ;
}

static void	ft_display_error_input_msg(void)
{
	std::cout << "Please enter a valid input :" << std::endl;
	std::cout << "	- ADD" << std::endl;
	std::cout << "	- SEARCH" << std::endl;
	std::cout << "	- EXIT" << std::endl;
	return ;
}

int	main(int argc, char **argv)
{
	std::string	input;
	PhoneBook	my_directory;
	(void)argv;
	
	if (argc > 1)
	{	
		std::cout << "\nPlease do not get input to the execution\n" << std::endl;
		return (1);
	}	
	ft_display_rules();
	while (1)
	{
		ft_get_order(&input);
		if (!input.compare("ADD"))
			my_directory.ft_add_contact();
		else if (!input.compare("SEARCH"))
			my_directory.ft_search_contact();
		else if (!input.compare("EXIT"))
			break;
		else 
			ft_display_error_input_msg();
	}
	return (0);
}