/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:59:01 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		int	_gateKeeperMode;
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const&);
		ScavTrap &operator = (ScavTrap const&);
	
	//	Constructors

		ScavTrap(std::string const&);
	
	//	Methods

		void guardGate(void);
		void attack(std::string const&);
};

#endif
