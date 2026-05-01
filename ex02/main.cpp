/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:20:19 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:50:18 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		FragTrap f;
		FragTrap e("Little Frag");

		std::cout << std::endl << "--- INITIAL STATUS OF " << e.getName() << " ---" << std::endl;
		std::cout << "Hit points: " << e.getHitPoints() << std::endl;
		std::cout << "Energy points: " << e.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << e.getAttackDamage() << std::endl << std::endl;

		e.highFivesGuys();
		e.attack("other Frag");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("other Frag");

		std::cout << std::endl << "--- FINAL STATUS OF " << e.getName() << " ---" << std::endl;
		std::cout << "Hit points: " << e.getHitPoints() << std::endl;
		std::cout << "Energy points: " << e.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << e.getAttackDamage() << std::endl;
	}
	return (0);
}