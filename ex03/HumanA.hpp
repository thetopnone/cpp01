/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:29:40 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:29:41 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class HumanA{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string nm, Weapon& wpn);
		~HumanA();

		void	setName(std::string name);
		void	setWeapon(Weapon wpn);
		std::string& getName();
		Weapon&	getWeapon();

		void attack();
};
#endif
