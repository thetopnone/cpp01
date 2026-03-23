/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:29:46 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:29:47 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nm)
	:name(nm)
	,weapon(NULL)
{}

HumanB::~HumanB(){
}

void	HumanB::setName(std::string nm){
	name = nm;
}

void	HumanB::setWeapon(Weapon& wpn){
	weapon = &wpn;
}

std::string& HumanB::getName( void ){
	return (name);
}

Weapon& HumanB::getWeapon( void ){
	return (*weapon);
}

void HumanB::attack( void ){
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

