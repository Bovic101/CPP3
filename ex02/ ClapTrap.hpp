/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:36:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 20:46:10 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
public:
    std::string _Name;
    int _hitpoint;
    int _energypoint;
    int _attackDamage;

public:
    ClapTrap();                               // Default Constructor
    ClapTrap(const std::string& alias);   // Parameterized Constructor
    ClapTrap(const ClapTrap& cp);          // Copy Constructor
    ClapTrap& operator=(const ClapTrap& cp); // Copy Assignment Operator
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif
