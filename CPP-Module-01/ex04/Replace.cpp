/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:36:43 by rcabezas          #+#    #+#             */
/*   Updated: 2022/08/29 19:44:31 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string _filename, std::string _replacement, std::string _toReplace)
{
	this->_filename = _filename;
	this->_file.open(_filename, std::fstream::in);
	this->_replacement = _replacement;
	this->_toReplace = _toReplace;
}

Replace::~Replace(void)
{
	this->_file.close();
}

std::string	Replace::replace_line(std::string line)
{
	std::string::size_type	pos;
	
	pos = line.find(this->_toReplace);
	while (pos != std::string::npos)
	{
		line.erase(pos, this->_toReplace.size());
		line.insert(pos, this->_replacement);
		pos = line.find(this->_toReplace, pos + 1);
	}
	return line;
}

void	Replace::get_line(void)
{
	std::string		line;
	size_t			position;
	std::fstream	newfile;
	std::string		replacedLine;

	newfile.open(this->_filename + ".replace", std::fstream::out);
	while (std::getline(this->_file, line))
	{
		if ((position = line.find(this->_toReplace)))
		{
			replacedLine = Replace::replace_line(line);
			newfile << replacedLine << "\n";
		}
		else
			newfile << line << "\n";
	}
}
