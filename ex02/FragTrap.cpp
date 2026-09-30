/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:39:15 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/25 18:20:42 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap()
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
	: ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (getHitPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " is dead and can't attack!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " has no energy to attack!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "FragTrap " << getName() << " attacks " << target << ", causing "
			  << getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " is already dead!" << std::endl;
		return;
	}
	if (amount >= getHitPoints())
	{
		setHitPoints(0);
		std::cout << "FragTrap " << getName() << " takes " << amount
				  << " points of damage and dies!" << std::endl;
	}
	else
	{
		setHitPoints(getHitPoints() - amount);
		std::cout << "FragTrap " << getName() << " takes " << amount
				  << " points of damage! (" << getHitPoints() << " hitPoints)" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " is dead and can't be repaired!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " has no energy to repair itself!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() + amount);
	std::cout << "FragTrap " << getName() << " is repaired for " << amount
			  << " hit points! (" << getHitPoints() << " HP now)" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " requests a positive high fives!" << std::endl;
}
