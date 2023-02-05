/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/05 16:40:11 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/ClapTrap.hpp"

int	main(void)
{
	ClapTrap *claptrap = new ClapTrap();
	delete claptrap;
	
	std::cout << "----\n";

	ClapTrap Mark("Mark");
	ClapTrap Sofia("Sofia");
	
	std::cout << "----\n";

	Mark.attack("Sofia");
	Sofia.takeDamage(0);

	std::cout << "----\n";

	for (int i = 0; i < 10; i++)
		Mark.attack("Dummy");

	std::cout << "----\n";

	Sofia.takeDamage(13);
	Sofia.attack("Mark");
	Sofia.beRepaired(10);

	std::cout << "----\n";
}