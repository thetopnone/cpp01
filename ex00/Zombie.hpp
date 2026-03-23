/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:16:34 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/23 10:16:36 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string nm);
		~Zombie();
		void		setName(std::string nm);
		std::string	getName();
		void		announce( void );
};
#endif
