/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:53:22 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/16 16:03:43 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"
#include "../incs/HumanB.hpp"

//constructor
/**
 * @brief Construct a new HumanB:: HumanB object
 * 
 * @param name
 * name is a string that is passed as a parameter to the constructor
 * name is used to initialize the private member variable _name
 * 
 * @param weapon
 * weapon is a reference to a Weapon object that is passed as a parameter to the constructor
 * weapon is used to initialize the private member variable _weapon
 */
HumanB::HumanB(const std::string & name) : _name(name)
{
	//std::cout << "HumanB: " << this->_name << " constructed." << std::endl;
}

//destructor
HumanB::~HumanB()
{
	//std::cout << "HumanA: " << this->_name << " destroyed." << std::endl;
}

//function to set weapon
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

//function displaying message
void HumanB::attack() const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon to attack with." << std::endl;
	else
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

