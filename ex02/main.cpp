/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/06 13:34:20 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/ClapTrap.hpp"
#include "heads/ScavTrap.hpp"
#include "heads/FragTrap.hpp"

int	main(void)
{
	FragTrap *fragtrap = new FragTrap();
	delete fragtrap;

	std::cout << "----\n";

	FragTrap Mark("Mark");
	ClapTrap Sofia("Sofia");
	
	std::cout << "----\n";

	Sofia.attack("Mark");
	Mark.takeDamage(0);
	
	std::cout << "----\n";

	Mark.attack("Sofia");
	
	Sofia.takeDamage(30);
	Sofia.attack("Mark");
	Sofia.beRepaired(10);

	std::cout << "----\n";

	Mark.highFiveGuys();

}