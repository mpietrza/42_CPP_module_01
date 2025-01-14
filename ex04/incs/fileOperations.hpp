/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileOperations.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:20:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/14 16:00:31 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_OPERATIONS_HPP
# define FILE_OPERATIONS_HPP


class fileOperations
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		fileOperations();
		~fileOperations();
		void openAndCopy(const std::string & filename);
		void replaceString(const std::string & s1, const std::string & s2);
};

#endif