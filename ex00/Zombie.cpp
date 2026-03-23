/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:16:39 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 10:16:41 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
	:name("")
{}

Zombie::Zombie(std::string nm)
	:name(nm)
{}

Zombie::~Zombie( void ){
	std::cout << getName() << " Has Died" << std::endl;
}

void Zombie::setName(std::string nm){
	name = nm;
}

std::string	Zombie::getName( void ){
	return (name);
}

void Zombie::announce( void ){
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
