/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:23:15 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 08:11:10 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"


class HumanB{

public :

	HumanB();
	HumanB( std::string name );
	~HumanB();
	
	void	setWeapon( Weapon& weapon );
	
	void	removeWeapon( void );

	void	attack( void );

private :

	std::string _name;
	Weapon*		_weapon;
	
};

#endif