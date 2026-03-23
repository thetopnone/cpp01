/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:30:06 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:30:07 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
	:type("")
{}

Weapon::Weapon(std::string tp)
	:type(tp)
{}

Weapon::~Weapon( void )
{}

void Weapon::setType( std::string tp)
{
	type = tp;
}

//This will return a reference to the type. References are constant by their 
//nature and writing &const is invalid
std::string& Weapon::getType(){
	return (type);
}
