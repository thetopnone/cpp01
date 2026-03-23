/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:35:51 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 10:35:52 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main( void ){
	Zombie *zb;

	zb = newZombie("Ben");
	zb->announce();
	randomChump("Max");
	delete zb;
	return (0);
}
