/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:41:32 by vde-leus          #+#    #+#             */
/*   Updated: 2023/05/11 15:57:43 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char	**test;
	int		i = 0;
	
	test = (char **)malloc(sizeof(char *) * 4);
	test[0] = (char *)malloc(sizeof(char) * 4);
	test[0][0] = 'a';
	test[0][1] = 'b';
	test[0][2] = 'c';
	test[0][3] = '\0';
	test[1] = (char *)malloc(sizeof(char) * 4);
	test[1][0] = 'd';
	test[1][1] = 'e';
	test[1][2] = 'f';
	test[1][3] = '\0';
	test[2] = (char *)malloc(sizeof(char) * 4);
	test[2][0] = 'g';
	test[2][1] = 'h';
	test[2][2] = 'i';
	test[2][3] = '\0';
	test[3] =  NULL;
	while (test[i])
		dprintf(2, "%s\n", test[i++]);
	free(test[0]);
	i = 1;
	while (test[i])
	{	
		test[i - 1] = test[i];
		i++;
	}
	test[i - 1] = NULL;
	// i = 0;
	// while (test[i])
		dprintf(2, "\n");
		dprintf(2, "%s\n", test[0]);
		dprintf(2, "%s\n", test[1]);
		dprintf(2, "%s\n", test[2]);

	return (0);
}