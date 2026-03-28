/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:52:42 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 13:52:43 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replacer(std::fstream& fs, char *filename, std::string s1, std::string s2);

int main (int argc, char **argv){
	if (argc != 4)
		std::cerr << "Error\n3 arguments are needed for execution" << std::endl;
	
	std::fstream fs;

	fs.open(argv[1], std::fstream::in | std::fstream::out);
	if (fs.fail() == true){
		std::cerr << "Error\nInvalid Filename" << std::endl;
		return (1);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	replacer(fs, argv[1], s1 ,s2);
	return (0);
}
