/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:16:00 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/28 17:16:01 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(){};

Harl::~Harl(){};

void Harl::debug( void ){
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\n";
	std::cout << std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	std::cout << std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\n";
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
	std::cout << std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level){
	std::string	levels[] = {
		"DEBUG"
		,"INFO"
		,"WARNING"
		,"ERROR"
	};

	void (Harl::*functions[])( void ) = {
		&Harl::debug
		,&Harl::info
		,&Harl::warning
		,&Harl::error
	};

	int	count = (int) (sizeof(levels) / sizeof(levels[0]));
	int i = 0;
	while (i < count)
	{
		if (level == levels[i])
			break;
		i++;
	}

	switch(i){
		case 0:
			(this->*functions[0])();
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		case 1:
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		case 2:
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		case 3:
			(this->*functions[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
