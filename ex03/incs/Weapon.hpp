/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:48:42 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/16 16:04:56 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string _type;
	public:
		Weapon(const std::string &ype );
		~Weapon();
		const std::string &getType() const;
		void setType(const std::string &type);
};

#endif
