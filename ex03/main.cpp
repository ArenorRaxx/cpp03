/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 12:21:57 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/ClapTrap.hpp"
#include "heads/ScavTrap.hpp"
#include "heads/FragTrap.hpp"
#include "heads/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap *trap = new DiamondTrap;
	delete trap;

	std::cout << "----\n";

	DiamondTrap Ruby("Ruby");
	FragTrap	Mark("Mark");
	
	std::cout << "----\n";

	Mark.attack("Ruby");
	Ruby.takeDamage(30);
	Ruby.attack("Mark");
	Mark.takeDamage(30);
	
	std::cout << "----\n";

	Ruby.highFiveGuys();
	Ruby.guardGate();
	Ruby.attack("Mark");
	Ruby.whoAmI();

	std::cout << "----\n";

}