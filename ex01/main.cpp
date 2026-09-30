/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:35:49 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/23 19:45:49 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("ScavTrap");
	scav.attack("ClapTrap");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();
	return 0;
}
