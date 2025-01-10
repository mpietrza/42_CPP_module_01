/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:47:58 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/10 17:31:37 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zombies[i].setName(name);
	return (Zombies);
}
