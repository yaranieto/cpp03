/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaranietosantos <yaranietosantos@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:36:13 by yaranietosa       #+#    #+#             */
/*   Updated: 2026/03/28 17:13:34 by yaranietosa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) 
: name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
: name(src.name), hitPoints(src.hitPoints), energyPoints(src.energyPoints), attackDamage(src.attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		name = src.name;
		hitPoints = src.hitPoints;
		energyPoints = src.energyPoints;
		attackDamage = src.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is dead and can't attack!" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to attack!" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target 
			  << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		return;
	}
	if (amount >= hitPoints)
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount 
				  << " points of damage and dies!" << std::endl;
	}
	else
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount 
				  << " points of damage! (" << hitPoints << " hitPoints)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is dead and can't be repaired!" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to repair itself!" << std::endl;
		return;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " is repaired for " << amount 
			  << " hit points! (" << hitPoints << " HitsPoints now)" << std::endl;
}

void ClapTrap::setName(const std::string& name)
{
	this->name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}
std::string ClapTrap::getName(void) const
{
	return name;
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return attackDamage;
}