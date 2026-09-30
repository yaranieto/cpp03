/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:40:01 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/25 18:50:00 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap d("Diamond");
	d.whoAmI();
	d.attack("bandit");
	d.guardGate();
	d.highFivesGuys();
	d.takeDamage(30);
	d.beRepaired(10);
	return 0;
}
