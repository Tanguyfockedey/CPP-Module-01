/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:28:29 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/24 17:49:59 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address : " << &string << std::endl;
	std::cout << "pointer value: " << stringPTR << std::endl;
	std::cout << "reference value: " << &stringREF << std::endl << std::endl;
	
	std::cout << "string: " << string << std::endl;
	std::cout << "pointed value: " << *stringPTR << std::endl;
	std::cout << "referenced value: " << stringREF << std::endl;
}