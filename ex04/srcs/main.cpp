/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:22:49 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/15 13:53:14 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/fileOperations.hpp"
#include <string>
#include <iostream>

int	 main(int argc, char **argv)
{
	if (argc != 4)
	{
		std:: cerr << "Error: introduce 3 arguments" << std::endl;
		return (1);
	}

	std::string	name = argv[1];
	std::string	s1	 = argv[2];
	std::string	s2	 = argv[3];

	fileOperations fileOps(name, s1, s2);
	fileOps.replaceString();

	return (0);
}

