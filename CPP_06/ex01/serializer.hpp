/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:27:46 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/30 15:08:23 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

struct Data
{
	int			int_data;
	std::string	str_data;
};

class Serializer
{
	public :

		Serializer(void);
		Serializer(const Serializer &mySerialize);
		~Serializer();

		Serializer	&	operator=(const Serializer &mySerialize);

		uintptr_t serialize(Data *ptr);
		Data* deserialize(uintptr_t raw);
		
};

#endif