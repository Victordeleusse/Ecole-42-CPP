/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:36:18 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/25 09:43:07 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <iostream>
# include <fstream>
# include <string>
# include <vector>

void						ft_get_positions(std::string source, std::string str1, std::vector<int> *positions);
void						ft_get_unchangedStr(std::string source, std::string str1, std::vector<int> positions, std::vector<std::string> *unchanged_str);
std::vector<std::string>	ft_parse(char **argv);
int							ft_replace(char **argv, std::vector<std::string> unchanged_str);

#endif
