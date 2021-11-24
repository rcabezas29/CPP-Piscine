/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:30:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/24 21:09:23 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
	private:
		std::string		_filename;
		std::fstream	_file;
		std::string		_replacement;
		std::string		_toReplace;

	public:
		Replace(void);
		Replace(std::string _filename, std::string _replacement, std::string _toReplace);
		~Replace(void);
		Replace &operator=(const Replace &Replace);

		void		get_line(void);
		std::string	replace_line(std::string line);
};
#endif
