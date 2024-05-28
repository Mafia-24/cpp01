/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 03:55:36 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 05:39:28 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon() : _type(""){	
};

Weapon::Weapon( std::string type) : _type(type) {
};

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string& Weapon::getType( void ) const
{
	return (this->_type);
}