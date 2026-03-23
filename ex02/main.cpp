/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:15:50 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:15:50 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main ( void ){
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "str memory address:		" << &str << '\n';
	std::cout << "stringPTR memory address:	" << stringPTR << '\n';
	std::cout << "stringREF memory address:	" << &stringREF << '\n';
	
	std::cout << "str value:			" << str << '\n';
	std::cout << "stringPTR pointed value:	" << *stringPTR << '\n';
	std::cout << "stringREF pointed value:	" << stringREF << std::endl;
	return (0);
}
