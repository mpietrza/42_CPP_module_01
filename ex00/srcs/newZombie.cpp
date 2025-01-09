/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:53:46 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/09 16:36:57 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

// This function creates a new Zombie object and returns a pointer to it
Zombie	*newZombie(std::string name)
{
	return ( new Zombie(name) );
}
