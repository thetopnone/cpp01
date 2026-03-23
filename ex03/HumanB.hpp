/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:29:52 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 11:29:53 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string nm);
		~HumanB();

		void	setName(std::string name);
		void	setWeapon(Weapon& wpn);
		std::string& getName();
		Weapon&	getWeapon();

		void attack();
};
#endif
