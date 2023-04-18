/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:50:17 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/12 14:38:34 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASSE_H

# include <iostream>

// Definition de ma classe - implementation de mon constructeur
// et de mon destructeur

// Implementation d un attribut membre de la classe -> foo
// Declaration d une fonction membre de la classe -> fonction a definir au meme titre que le constructeur et que le destructeur 

class Sample {
	
	public :
	
	int		foo;
	
	Sample(void);
	~Sample(void);

	void	bar(void);
	
};

#endif