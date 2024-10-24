/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:51 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/24 18:53:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::setType(Weapon type)
{
	this->type = type;
}

void	HumanB::setWeapon(Weapon type)
{
	this->type = type;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}
