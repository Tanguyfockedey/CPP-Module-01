/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:31:16 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/24 17:26:46 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie	*zombie;

	N = 5;
	zombie = zombieHorde(N, "newZombie");
	if (zombie)
	{
		while (N--)
			zombie[N].announce();
	}
	delete[] zombie;
	system("leaks zombie.exe");
	return (0);
}