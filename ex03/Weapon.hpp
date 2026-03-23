/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:30:02 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:30:03 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon{
	private:
		std::string	type;	
	public:
		Weapon();
		Weapon(std::string tp);
		~Weapon();
		void setType(std::string tp);
		std::string& getType();
};
#endif
