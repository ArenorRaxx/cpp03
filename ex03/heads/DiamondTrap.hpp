/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:48:50 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 12:10:53 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const&);
		DiamondTrap &operator = (DiamondTrap const&);

	//	Constructors

		DiamondTrap(std::string const&);

	//	Methods

		void attack(std::string const&);
		void whoAmI(void) const;
};

#endif
