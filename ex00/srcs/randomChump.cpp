/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:05:34 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/09 16:37:04 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

// This function creates a new Zombie object and calls the announce method
void	randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
}
