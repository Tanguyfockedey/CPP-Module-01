/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:15 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/28 15:33:29 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type): type(type)
{}

Weapon::~Weapon(void)
{}

std::string	Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(const std::string type)
{
	this->type = type;
}
