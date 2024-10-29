/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:05:44 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/29 18:06:08 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	in;

	while(std::getline(std::cin, in))
	{
		if (in == "EXIT")
			break;
		harl.complain(complain[std::rand() % 4]);
	}
}
