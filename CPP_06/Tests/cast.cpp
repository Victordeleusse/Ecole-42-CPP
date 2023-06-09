/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:16:16 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/26 17:18:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>


int main(int argc, char **argv)
{
	std::string s = argv[1];
	
	if (s[s.length() - 1] == 'f')
		s.erase(s.length() - 1);
	std::cout << "output : " << s << std::endl;
	return (0);	
}
