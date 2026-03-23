/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:29:36 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:29:37 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include <iostream>

HumanA::HumanA(std::string nm, Weapon& wpn)
	:name(nm)
	,weapon(wpn)
{}

HumanA::~HumanA(){}

void	HumanA::setName(std::string nm){
	name = nm;
}

void	HumanA::setWeapon(Weapon wpn){
	weapon = wpn;
}

std::string& HumanA::getName( void ){
	return (name);
}

Weapon& HumanA::getWeapon( void ){
	return (weapon);
}

void HumanA::attack( void ){
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
