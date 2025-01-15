/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileOperations.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:20:24 by mpietrza          #+#    #+#             */
/*   Updated: 2025/01/15 13:29:31 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_OPERATIONS_HPP
# define FILE_OPERATIONS_HPP

#include <string>

class fileOperations
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		fileOperations(const std::string &filename, const std::string &s1, const std::string &s2);
		~fileOperations();
		void openAndCopy();
		void replaceString();
};

#endif
