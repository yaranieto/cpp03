/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:28 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/02/11 18:24:50 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrapA");
	ClapTrap b("ClapTrapB");

	a.attack("ClapTrapB");
	b.takeDamage(0);
	b.beRepaired(5);
	b.attack("ClapTrapA");
	a.takeDamage(0);
	a.beRepaired(3);

	return 0;
}

