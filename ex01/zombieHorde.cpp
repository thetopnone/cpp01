/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:45:56 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 10:45:57 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* zb = new Zombie[N];

	for (int i = 0; i < N; i++){
		zb[i].setName(name);
		zb[i].announce();
	}
	return (zb);
}
