/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:25:44 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 19:35:01 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include " ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();                               // Default Constructor
    ScavTrap(const std::string& alias);   // Parameterized Constructor
    ScavTrap(const ScavTrap& cp);          // Copy Constructor
    ScavTrap& operator=(const ScavTrap& cp); // Copy Assignment Operator
    ~ScavTrap();

    void attack(const std::string& target);
	void guardGate();
};
#endif