/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:56:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/13 17:06:08 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	& _Weapon;
		std::string	_name;
	public:
		HumanA(std::string name, std::string Weapon);
		~HumanA();
		attack();
};

#endif
