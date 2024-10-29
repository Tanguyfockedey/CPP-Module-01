/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:21:09 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/29 14:55:15 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int	error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

void	replace(std::string &buff, const std::string s1, const std::string s2, std::ofstream &out)
{
	int	search;

	while ((search = buff.find(s1)) != -1)
	{
		out << buff.substr(0, search) << s2;
		buff = buff.substr(search + s1.size(), -1);
	}
	out << buff;
}

int	main(int argc, char **argv)
{
	std::string infile;
	std::string	buff;
	std::ifstream in;
	std::ofstream out;
	std::ostringstream oss;

	if (argc != 4)
		return (error("Wrong number of arguments !"));
	infile = argv[1];
	in.open(infile);
	if (!in.is_open())
		return (error("Couldn't open file !"));
	out.open(infile.append(".replace"), std::ofstream::trunc);
	if (!out.is_open())
		return (error("couldn't create .replace file !"));
	oss << in.rdbuf();
	buff = oss.str();
	replace(buff, argv[2], argv[3], out);
	out.close();
	in.close();
}
