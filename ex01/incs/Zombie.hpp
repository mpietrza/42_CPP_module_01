/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:08:48 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/10 17:32:50 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
		int			_n;
	public:
		Zombie();
		Zombie(std::string name, int n);
		~Zombie();
		void    announce( void );
		void	setName( std::string name );
		Zombie*	zombieHorde( int N, std::string name );
};

#endif
