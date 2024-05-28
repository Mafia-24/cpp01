/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:01:36 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 08:03:05 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){	
}

HumanA::HumanA(Weapon& weapon) : _weapon(weapon){
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType () << std::endl;
}

HumanA::~HumanA()
{
	// if (this->_weapon != nullptr)
	// 	delete this->_weapon;
}