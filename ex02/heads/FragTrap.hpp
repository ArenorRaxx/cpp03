/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:32:13 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(FragTrap const&);
		FragTrap &operator = (FragTrap const&);
	
	//	Constructors

		FragTrap(std::string const&);
	
	//	Methods

		void attack(std::string const&);
		void highFiveGuys(void);
};