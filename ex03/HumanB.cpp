/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:51 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:01 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name): name(name)
{
	type = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}

void	HumanB::attack(void) const
{
	if (type)
		std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist" << std::endl;
}
