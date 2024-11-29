/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:45:21 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/29 19:10:48 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ClapTrap.hpp"

int main()
{
	ClapTrap s1("Victor Warrior"); //passing parameter to constutor
	ClapTrap s2= s1; //copy constr.
	ClapTrap s3; //default constr.
	
	s1.attack("First enemy");
	s1.takeDamage(4);
	s1.beRepaired(6);
	
	return(0);
}