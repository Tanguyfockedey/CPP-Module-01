/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:35 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/24 18:45:39 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type): name(name), type(type)
{}

HumanA::~HumanA()
{}

void	HumanA::setType(Weapon type)
{
	this->type = type;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}
