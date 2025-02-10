/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileOperations.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:49:25 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/10 18:00:49 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/fileOperations.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

//constructor
fileOperations::fileOperations(const std::string &filename, const std::string &s1, const std::string &s2)
	: _filename(filename.c_str()), _s1(s1), _s2(s2)
{
	//std::cout << "fileOperations constructed" << std::endl;
}

//destructor
fileOperations::~fileOperations()
{
	//std::cout << "fileOperations destructed" << std::endl;
}

void	fileOperations::openAndCopy()
{
	std::ifstream	infile(_filename.c_str(), std::ios_base::in);
	if (!infile.is_open())
	{
		std::cerr << "Errror: infile crush" << std::endl;
		return;
	}
	
	std::string buf;
	std::getline(infile, buf, '\0');
	if (buf.empty())
	{
		std::cerr << "Error: the input file is empty" << std::endl;
		infile.close();
		return;
	}

	std::ofstream	outfile(std::string(_filename + ".replace").c_str(), std::ios_base::out);
	if (!outfile.is_open())
	{
		std::cerr << "Error: outfile crush" << std::endl;
		infile.close();
		return;
	}

	for (size_t pos = buf.find(_s1); pos != std::string::npos; pos = buf.find(_s1, pos + _s2.length()))
	{
		buf.erase(pos, _s1.length());
		buf.insert(pos, _s2);
	}
	outfile << buf;
	infile.close();
	outfile.close();
}

void	fileOperations::replaceString()
{
	if (_s1.empty())
	{
		std::cerr << "Error: the string to find cannot be empty" << std::endl;
		return;
	}
	openAndCopy();
}
