/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:03:07 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/28 15:03:09 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	replacer(std::fstream& fs, char *filename, std::string s1, std::string s2){
	std::fstream	newFs;
	std::string		line;
	std::size_t		found;

	newFs.open(strcat(filename, ".replace"), std::fstream::out | std::fstream::trunc);
	if (s1.empty()){
		newFs << fs.rdbuf();
		return (0);
	}
	while (fs.eof() != true){
		std::getline(fs, line);
		if (fs.eof() != true)
			line += '\n';
		found = line.find(s1, 0);
		while (found != std::string::npos){
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1, found + s2.length());
		}
		newFs << line;
	}
	newFs.close();
	return (0);
}