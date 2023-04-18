/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:30:10 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 16:28:12 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

# include <iostream>

class Sample2{

public :
	
	float const	pi;
	int			qd;

	Sample2(float const f);
	~Sample2(void);

	void	bar(void)const;

};

#endif