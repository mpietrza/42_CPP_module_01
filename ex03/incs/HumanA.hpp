/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:56:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/14 15:31:15 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(const std::string & name, Weapon & weapon);
		~HumanA();
		void attack() const;
};

#endif
