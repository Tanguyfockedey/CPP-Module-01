/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:35 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/28 15:35:51 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &type): name(name), type(type) 
{}

HumanA::~HumanA()
{}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}
