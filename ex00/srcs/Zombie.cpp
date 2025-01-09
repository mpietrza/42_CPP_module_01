/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:56:21 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/09 16:37:39 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

// This function creates a new Zombie object and returns a pointer to it
void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

