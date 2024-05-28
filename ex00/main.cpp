/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 00:48:33 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 03:10:08 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

int main( void )
{
	Zombie* heapZombie = newZombie ( "Zombie 1" );
	
	heapZombie->announce ();
	
	randomChump ( "Zombie 2" );
	
	delete heapZombie;
	
	return (0);
}

Zombie* newZombie( std::string name )
{
	Zombie* zombie = new(std::nothrow) Zombie(name);
	
	if (!zombie)
	{
		std::cout << "Zombie allocation failed!" << std::endl;
		exit (1);
	}

	return (zombie);
}

void	randomChump( std::string name )
{
	Zombie stackZombie(name);

	stackZombie.announce();
}
