/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:56:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/13 17:09:25 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string _Weapon;
		std::string	_name;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
};

#endif
