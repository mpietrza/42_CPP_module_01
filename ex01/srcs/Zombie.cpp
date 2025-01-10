/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:52:39 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/10 17:35:49 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

/*------------------------------ Constructors: -------------------------------*/
/* In C++, having multiple constructors in a class is a feature known 
as **constructor overloading**. This allows a class to be instantiated 
in different ways, depending on the arguments provided */

//Default constructor:
Zombie::Zombie()
{
	//std::cout << "Standard zombie object created." << std::endl;
}

//Parametrized constructor:
Zombie::Zombie(std::string name, int n)
{
	this->_name = name;
	this->_n = n;
	//std::cout << "Parametrized zombie " << this->_name << " number " << this->_n << " created." << std::endl;
}

/*------------------------------- Destructor: --------------------------------*/
Zombie::~Zombie()
{
	//std::cout << "Zombie object destroyed." << std::endl;
}

/*--------------------------------- Setters: ---------------------------------*/
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/*---------------------------- Member functions: ------------------------------*/
void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
