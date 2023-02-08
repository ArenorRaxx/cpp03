/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 12:12:35 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(FragTrap const&);
		FragTrap &operator = (FragTrap const&);
	
	//	Constructors

		FragTrap(std::string const&);
	
	//	Get / Set
		int getLP(void);
		int getMP(void);
		int getAD(void);

	//	Methods

		void highFiveGuys(void);

};

#endif
