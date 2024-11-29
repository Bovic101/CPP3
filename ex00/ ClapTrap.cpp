/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:55:39 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 18:43:01 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ClapTrap.hpp"

ClapTrap::ClapTrap() :_Name("Default"), _hitpoint(10),_energypoint(10),_attackDamage(0)
{
	std::cout <<"ClapTap" <<_Name << "has at a default level,0 energy and hitpoint"<<std::endl;
}
//Constructor
ClapTrap::ClapTrap(const std::string& alias):_Name(alias), _hitpoint(10),_energypoint(10),_attackDamage(0)
{
	std::cout << "ClapTap" <<_Name << "created" <<std::endl;
}
//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& cp) :_Name(cp._Name), _hitpoint(cp._hitpoint),_energypoint(cp._energypoint),_attackDamage(cp._attackDamage)
{
	std::cout << "ClapTrap" <<_Name << "is a a copy contructor created"<<std::endl;
}

//assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& cp)
{
	//Conditional check to avoid self assignment of the attri
	if (this !=&cp)
	{
		_Name =cp._Name;
		_hitpoint = cp._hitpoint;
		_energypoint = cp._energypoint;
		_attackDamage = cp._attackDamage;
	}
	std::cout << "ClapTrap" <<_Name << "intialed by assignment operator" <<std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap" <<_Name <<"is destroyed" << std::endl;
}

//Publice Member Function

void ClapTrap::attack(const std::string& target)
{
	if (_energypoint <=0 || _hitpoint <=0)
	{
		std::cout << "ClapTrap" << "energypoint and hitpoint is 0" << std::endl;
		return;
	}
	_energypoint--;
	std::cout << "ClapTrap" <<_Name <<"attack" << target << ",causing" <<_attackDamage << "damage point" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoint = _hitpoint - amount;
	if (_hitpoint <0)
	{
		_hitpoint = 0;
	}
	std::cout << "ClapTrap" <<_Name << "has taken" <<amount << "damagepoint" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoint <= 0 || _hitpoint <= 0)
	{
		std::cout << "ClapTrap" <<_Name << "repaired and gained" <<amount << "hitpoint" << std::endl;
	}
}