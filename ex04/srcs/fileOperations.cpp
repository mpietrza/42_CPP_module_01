/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileOperations.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:49:25 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/14 16:07:04 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileOperations.hpp"
#include <iostream>
#include <fstream>

//constructor
fileOperations::fileOperations()
{
	std::cout << "fileOperations constructed" << std::endl;
}

//destructor
fileOperations::~fileOperations()
{
	std::cout << "fileOperations destructed" << std::endl;
}

void	fileOperations::openAndCopy(const std::string & filename)
{
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename.changeExtensiom("replace"));
}

}
