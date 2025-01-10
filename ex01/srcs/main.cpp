/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:37:01 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/10 17:27:41 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"
#include <cstdlib>

Zombie*	zombieHorde( int N, std::string name );

int	main()
{
	std::string	Input;
	std::string Name;
	int			numOfZombies = 0;

	std::cout << "Please give the number of zombies you want: ";
	getline(std::cin, Input);
	if (std::cin.eof())
		exit (0);
	numOfZombies = std::atoi(Input.c_str());
	if (numOfZombies <= 0)
	{
		std::cout << "Invalid number of Zombies, exiting the program." << std::endl;
		exit (0);
	}
	std::cout << "Please type the name for every zombie: ";
	getline(std::cin, Name);
	if (Name == "")
	{
		std::cout << "No name given, exiting the program." << std::endl;
		exit (0);
	}
	Zombie *Zombies = zombieHorde(numOfZombies, Name);
	for (int i = 0; i < numOfZombies; i++)
	{
		std::cout << "Zombie " << i + 1 << " ";
		Zombies[i].announce();
	}
	delete [] Zombies;
	return (0);
}


