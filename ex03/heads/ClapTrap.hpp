/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:52:26 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/05 16:51:2 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		int			_max_lp;
		int			_life_points;
		int			_mana;
		int			_attack_damage;
		std::string	_name;
	public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(ClapTrap const&);
		ClapTrap &operator = (ClapTrap const&);

		//	Constructors

		ClapTrap(int, int, int, std::string const&);
		ClapTrap(std::string const&);

		//	Methods

		void	attack(std::string const&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif