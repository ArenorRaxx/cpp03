/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 12:18:38 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		int	_gateKeeperMode;
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const&);
		ScavTrap &operator = (ScavTrap const&);
	
	//	Constructors

		ScavTrap(std::string const&);
	
	//	Get / Set
	
		int getLP(void);
		int getMP(void);
		int getAD(void);

	//	Methods

		void attack(std::string const&);
		void guardGate(void);
};

#endif
