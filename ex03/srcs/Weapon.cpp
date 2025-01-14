/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:18 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/14 14:28:14 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

//constructor
/**
 * @brief Construct a new Weapon:: Weapon object
 * 
 * @param type 
 * type is a string that is passed as a parameter to the constructor
 * type is used to initialize the private member variable _type
 * 
 * 
 * The constructor prints a message to the console indicating that the Weapon object has been constructed
 */
Weapon::Weapon(const std::string & type) : _type(type)
{
	//std::cout << "Weapon type: " << type << " constructed." << std::endl;
}

//destructor
Weapon::~Weapon()
{
	//std::cout << "Weapon type: " << this->_type << " destructed." << std::endl;
}

//member function that returns a const reference to type
const std::string  & Weapon::getType() const
{
	return (_type);
}

//member function that sets type using the new one passed as parameter
void Weapon::setType(const std::string & type)
{
	this->_type = type;
}
