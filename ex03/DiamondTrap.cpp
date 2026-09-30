/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:40:26 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/25 19:00:00 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
	: ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), name("Default")
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
	: ClapTrap(src), FragTrap(src), ScavTrap(src), name(src.name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		ClapTrap::operator=(src);
		name = src.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::getName() << std::endl;
}
