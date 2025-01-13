/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:18 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/13 17:48:23 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

//constructor
Weapon::Weapon(std::string type)
{
	std::cout << "Weapon type: " << type << " constructed." << std::endl;
}

//destructor
Weapon::~Weapon()
{
	std::cout << "Weapon type: " << this->_type << " destructed." << std::endl;
}

//member function that returns a const reference to type
std::string const & Weapon::getType() const;
{
	std::string const & type = this->_type;
	return (type);
}

//member function that sets type using the new one passed as parameter
void setType(std::string type);
{
	this->_type = &type;
}

