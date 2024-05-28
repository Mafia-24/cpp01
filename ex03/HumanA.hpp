/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 03:58:31 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 08:02:21 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA{

public :

	HumanA(std::string name, Weapon& weapon);
	HumanA(Weapon& weapon);
	
	~HumanA();

	void		setName( std::string name );

	void	attack( void );

private :

	std::string _name;
	Weapon&		_weapon;
};

#endif
