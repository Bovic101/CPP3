/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:43:30 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 21:08:34 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap() 
{
    _hitpoint = 100;
    _energypoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap: Default constructor for " << _Name  << std::endl; // Construtor for ClapTrap is called first
}

FragTrap::FragTrap(const std::string& cp) : ClapTrap(cp) 
{
    _hitpoint = 100;
    _energypoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap: Intialised constructor for " << _Name << std::endl;  // Construtor for ClapTrap is called first
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& cp) : ClapTrap(cp) 
{
    std::cout << "FragTrap: This is a opy constructor for " << _Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cp) 
{
    if (this != &cp) {
        ClapTrap::operator=(cp); // first call ClapTrap assignment operator
    }
    std::cout << "FragTrap: This is an ssignment operator for " << _Name << std::endl;
    return *this;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap: Destroyed " << _Name << std::endl;
}

void FragTrap::highFivesGuys() 
{
    std::cout << "FragTrap: " << _Name << " highfiveguys is active" << std::endl;
}
