/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:15:50 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/28 17:15:51 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main ( int argc, char *argv[]){
	if (argc != 2)
	{
		std::cout << "Harl is pretty silent this time. Try using: ./harlFilter <level>" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	class Harl mr_complainer;
	mr_complainer.complain(level);
	return (0);
}
