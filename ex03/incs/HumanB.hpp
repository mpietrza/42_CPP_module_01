/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:56:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/14 15:30:58 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
		
	public:
		HumanB(const std::string & name);
		~HumanB();
		void setWeapon(Weapon & weapon);
		void attack() const;
};

#endif
