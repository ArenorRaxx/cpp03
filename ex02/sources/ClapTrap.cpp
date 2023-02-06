/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:55:06 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:36:21 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/ClapTrap.hpp"


ClapTrap::ClapTrap(void): _max_lp(10) ,_life_points(10), _mana(10), _attack_damage(10)
{
	std::cout  << "ClapTrap Default constructor called.\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout  << "ClapTrap " << this->_name << ": Destructor called.\n";
}

ClapTrap::ClapTrap(ClapTrap const &to_copy): _max_lp(to_copy._max_lp)
{
	std::cout  << "ClapTrap " << this->_name << ": Copy constructor called.\n";
	*this = to_copy;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &to_set_to)
{
	std::cout  << "ClapTrap " << this->_name << ": Assignation constructor called with " << to_set_to._name << ".\n";
	this->_name = to_set_to._name;
	this->_life_points = to_set_to._life_points;
	this->_mana = to_set_to._mana;
	this->_attack_damage = to_set_to._attack_damage;
	return (*this);
}

//	Constructors

ClapTrap::ClapTrap(int lp, int mp, int atk, std::string const &name): _max_lp(lp), _life_points(lp), _mana(mp), _attack_damage(atk), _name(name)
{
	std::cout << "ClapTrap " << name << ": Full constructor called.\n";
}

ClapTrap::ClapTrap(std::string const &name): _max_lp(10), _life_points(10), _mana(10), _attack_damage(0), _name(name)
{
	this->_name = name;
	std::cout << "ClapTrap " << this->_name << ": By-name constructor called.\n";
}

//	Methods

void	ClapTrap::attack(std::string const &target)
{
	if (_life_points <= 0)
	{
		std::cout << this->_name << " is unable to act: 0 life point remaining\n";
		return ;
	}
	if (_mana <= 0)
	{
		std::cout << this->_name << " is unable to act: 0 mana point remaining\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_mana--;
	std::cout << this->_mana << " mana points remaining.\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_life_points <= 0)
	{
		std::cout << this->_name << " is already out-of-service: Inflicting emotional damages.\n";
		return ;
	}
	std::cout << this->_name << " takes " << amount << " points of damage!\n";
	this->_life_points -= amount;
	if (this->_life_points <= 0)
		std::cout << this->_name << " is now out-of-service.\n";
	else
		std::cout << this->_life_points << " life points remaining.\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_life_points <= 0)
	{
		std::cout << this->_name << " is unable to act: 0 life point remaining\n";
		return ;
	}
	if (this->_mana <= 0)
	{
		std::cout << this->_name << " is unable to act: 0 mana point remaining\n";
		return ;
	}
	std::cout << this->_name << " tries to restore its life points by " << amount << ".\n";
	if ((int)(amount + this->_life_points) > this->_max_lp)
		amount = this->_max_lp - this->_life_points;
	this->_life_points += amount;
	std::cout << amount << " life points restored, total life points: " << this->_life_points << ".\n";
	this->_mana--;
	std::cout << this->_mana << " mana points remaining.\n";
}
