/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:53:22 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/13 18:00:33 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

//constructor
HumanA::HumanA(std::string name, std::string Weapon)
{
	Weapon->_type = Weapon;
	this->_name = name;
}

//destructor
HumanA::~HumanA()
{
	std::cout << "HumanA: " << this->_name << " destroyed." << std::endl;
}

//function displaying message
void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << Weapon->_type << std::endl;
}

