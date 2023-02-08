/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:51:07 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 12:24:11 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(FragTrap::getLP(), ScavTrap::getMP(), FragTrap::getAD(), ""), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called.\n";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_gateKeeperMode = 0;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << ": Destructor called.\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &to_copy): ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
{
	std::cout << "FragTrap " << this->_name << ": Copy constructor called with " << to_copy._name << ".\n";
	*this = to_copy;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &to_set_to)
{
	std::cout << "DiamondTrap " << this->_name << ": Assignation constructor called with " << to_set_to._name << ".\n";
	this->_name = to_set_to._name;
	this->_max_lp = to_set_to._max_lp;
	this->_life_points = to_set_to._life_points;
	this->_mana = to_set_to._mana;
	this->_attack_damage = to_set_to._attack_damage;
	this->_gateKeeperMode = to_set_to._gateKeeperMode;
	return (*this);
}

//	Constructors

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(FragTrap::getLP(), ScavTrap::getMP(), FragTrap::getAD(), name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_gateKeeperMode = 0;
}

//	Methods

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->_name <<", and my ClapTrap is " << this->ClapTrap::_name << '\n';
}
