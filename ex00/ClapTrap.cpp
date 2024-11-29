/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:55:39 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 19:08:38 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : _Name("Default"), _hitpoint(10), _energypoint(10), _attackDamage(0) {
    std::cout << "ClapTrap: " << _Name << " has a default level, 10 energy and 10 hit points" << std::endl;
}

// Parameterized Constructor
ClapTrap::ClapTrap(const std::string& alias) : _Name(alias), _hitpoint(10), _energypoint(10), _attackDamage(0) {
    std::cout << "ClapTrap: " << _Name << " default constructor created" << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& cp) : _Name(cp._Name), _hitpoint(cp._hitpoint), _energypoint(cp._energypoint), _attackDamage(cp._attackDamage) {
    std::cout << "ClapTrap: " << _Name << " is created by copy constructor" << std::endl;
}

// Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& cp) 
{
    if (this != &cp) 
	{
        _Name = cp._Name;
        _hitpoint = cp._hitpoint;
        _energypoint = cp._energypoint;
        _attackDamage = cp._attackDamage;
    }
    std::cout << "ClapTrap: " << _Name << " assigned by assignment operator" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap: " << _Name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
    if (_energypoint <= 0 || _hitpoint <= 0) 
	{
        std::cout << "ClapTrap: " << _Name << " has no energy or hit points to attack!" << std::endl;
        return;
    }
    _energypoint--;
    std::cout << "ClapTrap: " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    _hitpoint -= amount;
    if (_hitpoint < 0) 
	{
        _hitpoint = 0;
    }
    std::cout << "ClapTrap: " << _Name << " has taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_energypoint <= 0 || _hitpoint <= 0) 
	{
        std::cout << "ClapTrap: " << _Name << " has no energy or hit points to repair!" << std::endl;
        return;
    }
    _hitpoint += amount;
    _energypoint--;
    std::cout << "ClapTrap: " << _Name << " repaired and gained " << amount << " hit points!" << std::endl;
}
