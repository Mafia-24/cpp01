/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 03:51:37 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 05:58:53 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{

public :

	Weapon();
	Weapon( std::string type);
	
	const std::string&	getType( void ) const;

	void				setType( std::string type );

private :
	
	std::string _type; // should i remove the '_' like in the subject ?
	
};


#endif