/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:49:30 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/09 16:36:45 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z =newZombie("Juan");
	z->announce();
	randomChump("Carlos");
	delete z;
}
