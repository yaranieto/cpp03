/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:36:56 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/28 17:27:00 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead and can't attack!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " has no energy to attack!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
			  << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " is already dead!" << std::endl;
		return;
	}
	if (amount >= getHitPoints())
	{
		setHitPoints(0);
		std::cout << "ScavTrap " << getName() << " takes " << amount
				  << " points of damage and dies!" << std::endl;
	}
	else
	{
		setHitPoints(getHitPoints() - amount);
		std::cout << "ScavTrap " << getName() << " takes " << amount
				  << " points of damage! (" << getHitPoints() << " hitPoints)" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead and can't be repaired!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " has no energy to repair itself!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() + amount);
	std::cout << "ScavTrap " << getName() << " is repaired for " << amount
			  << " hit points! (" << getHitPoints() << " HP now)" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in gate keeper mode!" << std::endl;
}
