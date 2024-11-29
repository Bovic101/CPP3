/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:25:04 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 20:23:55 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap() 
{
    _hitpoint = 100;
    _energypoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap: " << _Name << " is a default constructor " << std::endl;
}

// Initialised Constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    _hitpoint = 100;
    _energypoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap: " << _Name << " initialised constructor" << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) 
{
    std::cout << "ScavTrap: " << _Name << " is a copy constructor" << std::endl;
}

// Assignment Operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap: " << _Name << " assigned by assignment operator" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap: " << _Name << " attributes destroyed" << std::endl;
}

// Function to overide attack
void ScavTrap::attack(const std::string& target) 
{
    if (_energypoint <= 0 || _hitpoint <= 0) 
    {
        std::cout << "ScavTrap: " << _Name << " has 0 hitpoint and energypoint" << std::endl;
        return;
    }
    _energypoint--;
    std::cout << "ScavTrap: " << _Name << " attacks " << target << ", affect " << _attackDamage << " damage point" << std::endl;
}
void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap: " << _Name << " guardgate is in control" << std::endl;
}