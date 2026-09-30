/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:38:22 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/28 17:01:39 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	{
		FragTrap f("Fraggy");
		f.attack("skag");
		f.takeDamage(20);
		f.beRepaired(10);
		f.highFivesGuys();
	}
	return 0;
}
