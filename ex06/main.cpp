/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:44:25 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/16 15:35:03 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char **argv)
{
	if (argc != 2 || !argv[1])
	{
		std::cout << "No argument or too many arguments! Please give only one argument." << std::endl;
		return (1);
	}
	std::string	input = argv[1];
	Harl		harl;

	harl.complain(input);

	return (0);
}
