/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:04:01 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/16 15:52:55 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//constructor
Harl::Harl()
{
	//std::cout << "Harl constructed" << std::endl;
}

//destructor
Harl::~Harl()
{
	//std::cout << "Harl destroyed" << std::endl;
}

//function printing a 1st - 'debug' level complain
void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

//fuction printing a 2nd - 'info' level complain
void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

//function printing a 3rd - 'warning' level complain
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here last month." << std::endl;
}

//function printing a 4th - 'error' level complain
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

//function taking a certain level of complain and printing it
void Harl::complain( std::string level )
{
	void (Harl::*funcs[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}

	switch (i)
	{
		case 0:
			i = 0;
			(this->*funcs[i])();
		case 1:
			i = 1;
			(this->*funcs[i])();
		case 2:
			i = 2;
			(this->*funcs[i])();
		case 3:
			(this->*funcs[3])();
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

