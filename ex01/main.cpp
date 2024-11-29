/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:45:21 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 20:20:02 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap s1("ScavT_Vic"); //passing parameter to constutor to creat ScaVTrap Obj
	ScavTrap s2= s1; //copy constr.
	ScavTrap s3; //default constr.
	s3 = s1;//assignment opertor
	
	s1.attack("ScavT enemy");//This is the overide attack from ScavTrap
	s1.takeDamage(50);//Claptrap attribute by inheritance
	s1.beRepaired(25);
	s1.guardGate();
	
	return(0);
}