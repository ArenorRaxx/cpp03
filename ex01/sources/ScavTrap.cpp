/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:47:15 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:24:51 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(100, 50, 20, ""), _gateKeeperMode(0)
{
	std::cout << "ScavTrap Default constructor called.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << ": Destructor called.\n";
}

ScavTrap::ScavTrap(ScavTrap const &to_copy): ClapTrap(to_copy)
{
	std::cout << "ScavTrap " << this->_name << ": Copy constructor called with " << to_copy._name << ".\n";
}

ScavTrap &ScavTrap::operator = (ScavTrap const &to_set_to)
{
	std::cout << "ScavTrap " << this->_name << ": Assignation constructor called with " << to_set_to._name << ".\n";
	return (*this);
}

//	Constructors

ScavTrap::ScavTrap(std::string const &name): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this->_name << ": By-name constructor called.\n";
}

//	Methods

void ScavTrap::attack(std::string const &target)
{
	if (this->_gateKeeperMode)
	{
		std::cout << this->_name << " is unable to act: Guate Keeper Mode is up.\n";
		return ;
	}
	if (_life_points <= 0)
	{
		std::cout << this->_name << " is unable to act: 0 life point remaining\n";
		return ;
	}
	if (_mana <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is unable to act: 0 mana point remaining\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_mana--;
	std::cout << this->_mana << " mana points remaining.\n";
}

void ScavTrap::guardGate(void)
{
	this->_gateKeeperMode = !this->_gateKeeperMode;
	if (this->_gateKeeperMode)
		std::cout << this->_name << "'s Guate Keeper Mode activated.\n";
	else
		std::cout << this->_name << "'s Guate Keeper Mode deactivated.\n";
}
