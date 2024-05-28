/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 00:48:33 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 03:10:01 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
	int		N = 10;
	Zombie* heapZombies = zombieHorde ( N, "ZombieGang");

	for (int i = 0; i < N; i++)
		heapZombies[i].announce ();

	delete [] heapZombies;

	return (0);
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombies = new(std::nothrow) Zombie[N];

	if (zombies == nullptr)
	{
		std::cout << "Zombies array allocation has failed!" << std::endl;
		exit (1);
	}

	for (int i = 0; i < N; i++)
		zombies[i].setName(name);

	return (zombies);
}