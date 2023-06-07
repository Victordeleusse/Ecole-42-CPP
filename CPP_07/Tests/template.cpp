/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:28:44 by vde-leus          #+#    #+#             */
/*   Updated: 2023/06/07 15:34:46 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// TEMPLATE DE FONCTIONS

// T designe un type quelconque, MAIS toujours le meme
// On introduit un type T quelconque, int, float, class -> Nos parametres par reference ! -> Notre template de fonction ne modifie pas les valeurs de x ou y

template <typename T>
const T & max(const T & x, const T & y)
{
	return (x >= y ? x : y);
}

// Instanciation EXPLICITE -> Appel de notre fonction avec notre type entre < >
// Instanciation IMPLICITE -> Declaration des types des variables en amont de la fonction template

// Une fois le template instancie, il ne sera pas rappele a la compilation !

// TEMPLATE DE CLASS

template <typename T>
class	liste
{
	public:
		liste<T>();
		liste<T>(const liste<T> &myListe);
		~liste<T>;

	private:
		T 			*content;
		liste<T>	*next;
};

// Je peux utiliser ce template de classe pour pouvoir ensuite l instancier -> en precisant le type sur lequel je souhaite utiliser ce template

template <typename T = float>
class	vertex
{
	public:
		vertex(const T &x, const T &y, const T &z) : x(x), y(y), z(z) {}
		~vertex();

		const T &getX() const {return(this->x)};
		const T &getY() const {return(this->y)};
		const T &getZ() const {return(this->z)};
	
	private:
		const T	x;
		const T y;
		const T z;
		
		vertex();
};


// Besoin de preciser le type T lors de ma surcharge d operateur ! 
template <typename T>
std::ostream & operator<<(std::ostream &myStream, const vertex<T> &myVertex)
{
	// ....
	// ....
	return(myStream); 
}

// Specialisation complete de Template
template <typename T, typename U>
class	Pair
{
	public :
		Pair<T, U>(const T &varT, const U &varU) : myT(varT), myU(varU) {};
		~Pair() {};

		const T &getT() {return(this->myT)};
		const U &getU() {return(this->myU)};
	
	private :
		const T &myT;
		const U &myU;
		Pair<T, U>();

};

// Specialisation partiel de Template
template <int, template U>
class	Pair<int, U>
{
	public :
		Pair<int, U>(int myInt, const U &myU) : myInt(myInt), myU(myU) {};
		~Pair<int, U>() {};
		
		const int	getInt() {return(this->myInt)};
		const U		&getU()	{return(this->myU)};
		
	private :
		int	myInt;
		const U &myU;
}

