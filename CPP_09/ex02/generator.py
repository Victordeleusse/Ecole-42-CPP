# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    generator.py                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 15:38:11 by vde-leus          #+#    #+#              #
#    Updated: 2023/06/28 15:57:11 by vde-leus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
import random

def	generate(start, end, size) -> list :
	liste = []
	for i in range(size):
		liste.append(random.randint(start, end))
	return liste

if __name__ == "__main__":
	liste = generate(int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]))
	for k in liste :
		print (k, end=" ")