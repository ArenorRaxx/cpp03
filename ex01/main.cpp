/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:25:36 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/ClapTrap.hpp"
#include "heads/ScavTrap.hpp"

int	main(void)
{
	ScavTrap *scavtrap = new ScavTrap();
	delete scavtrap;

	std::cout << "----\n";

	ScavTrap Mark("Mark");
	ClapTrap Sofia("Sofia");
	
	std::cout << "----\n";

	Sofia.attack("Mark");
	Mark.takeDamage(0);
	
	std::cout << "----\n";

	Mark.guardGate();
	Mark.attack("Sofia");
	
	std::cout << "----\n";
	
	Mark.guardGate();
	Mark.attack("Sofia");
	
	std::cout << "----\n";

	Sofia.takeDamage(20);
	Sofia.attack("Mark");
	Sofia.beRepaired(10);

	std::cout << "----\n";
}