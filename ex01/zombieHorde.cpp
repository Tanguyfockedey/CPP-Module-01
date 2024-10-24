/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:41:48 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/24 17:10:21 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N < 1)
		return (NULL);
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	while (N--)
		horde[N].set_name(name);
	return (horde);
}
