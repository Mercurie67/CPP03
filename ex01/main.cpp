/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:19:35 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:49:56 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING SCAVTRAP ###\n" << std::endl;
	{
		ScavTrap c;
		ScavTrap d("Little Scav");

		std::cout << std::endl << "--- INITIAL STATUS OF " << c.getName() << " ---" << std::endl;
		std::cout << "Hit points: " << c.getHitPoints() << std::endl;
		std::cout << "Energy points: " << c.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << c.getAttackDamage() << std::endl;
		std::cout << "¿Guarding gate? " << std::boolalpha << c.getGuarding() << std::endl << std::endl;

		c.attack("Other Scav");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		std::cout << std::endl;
		d.attack("Big Scav");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("Bigger Scav");

		std::cout << std::endl << "--- FINAL STATUS OF " << c.getName() << " ---" << std::endl;
		std::cout << "Hit points: " << c.getHitPoints() << std::endl;
		std::cout << "Energy points: " << c.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << c.getAttackDamage() << std::endl;
		std::cout << "¿Guarding gate? " << std::boolalpha << c.getGuarding() << std::endl << std::endl;
	}
	return (0);
}