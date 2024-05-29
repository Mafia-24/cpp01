/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 02:25:48 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/29 02:31:44 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	
	Harl harl;

	harl.complain( "ERROdR" );
	harl.complain( "WARNING" );
	harl.complain( "INFO" );
	harl.complain( "DEBUG" );
	harl.complain( "ERROR" );

	return 0;
}
