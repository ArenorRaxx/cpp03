/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:47:15 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/07 11:14:11 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(100, 100, 30, "")
{
	std::cout << "FragTrap Default constructor called.\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << ": Destructor called.\n";
}

FragTrap::FragTrap(FragTrap const &to_copy): ClapTrap(to_copy)
{
	std::cout << "FragTrap " << this->_name << ": Copy constructor called with " << to_copy._name << ".\n";
	*this = to_copy;
}

FragTrap &FragTrap::operator = (FragTrap const &to_set_to)
{
	std::cout << "FragTrap " << this->_name << ": Assignation constructor called with " << to_set_to._name << ".\n";
	this->_name = to_set_to._name;
	this->_max_lp = to_set_to._max_lp;
	this->_life_points = to_set_to._life_points;
	this->_mana = to_set_to._mana;
	this->_attack_damage = to_set_to._attack_damage;
	return (*this);
}

//	Constructors

FragTrap::FragTrap(std::string const &name): ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << this->_name << ": By-name constructor called.\n";
}

//	Methods

void FragTrap::attack(std::string const &target)
{
	if (_life_points <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is unable to act: 0 life point remaining\n";
		return ;
	}
	if (_mana <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is unable to act: 0 mana point remaining\n";
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_mana--;
	std::cout << this->_mana << " mana points remaining.\n";
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": Let's High Five Guys!\n";
}
