/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 03:51:09 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 06:00:29 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void f()
{
	system ("leaks HiThisIsBrain");
}

int main( void )
{
	atexit (f);
	{
		Weapon club = Weapon("crude spiked club"); // What if an empty string was given as weapon name
		HumanA bob("Bob", club); // here the the human takes a copy of the weapon not the reference to that weapon it self so the two weapons are different
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		jim.removeWeapon();
		jim.attack ();
	}
	return 0;
}
