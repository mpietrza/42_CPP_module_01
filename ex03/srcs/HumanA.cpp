/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:53:22 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/16 16:03:52 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"
#include "../incs/HumanA.hpp"
//constructor
/**
 * @brief Construct a new HumanA:: HumanA object
 * 
 * @param name
 * name is a string that is passed as a parameter to the constructor
 * name is used to initialize the private member variable _name
 * 
 * @param weapon
 * weapon is a reference to a Weapon object that is passed as a parameter to the constructor
 * weapon is used to initialize the private member variable _weapon
 */
HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	//std::cout << "HumanA: " << this->_name << " constructed." << std::endl;
}

//destructor
HumanA::~HumanA()
{
	//std::cout << "HumanA: " << this->_name << " destroyed." << std::endl;
}

//function displaying message
void HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}

