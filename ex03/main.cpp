/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:21:04 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:50:56 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	{
		DiamondTrap b("Little Diamond");

		std::cout << "\n### TESTING DIAMONDTRAP ###" << std::endl;	
		std::cout << std::endl << "--- INITIAL STATUS OF " << b.getDname() << " ---" << std::endl;
		std::cout << "Hit points: " << b.getHitPoints() << std::endl;
		std::cout << "Energy points: " << b.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << b.getAttackDamage() << std::endl << std::endl;

		b.attack("Other Clap");
		b.takeDamage(10);
		b.takeDamage(10);
		b.beRepaired(5);
		b.attack("Other Clap");
		b.beRepaired(3);
		for (int i = 0; i < 3; i++)
			b.attack("Big Clap");
		b.beRepaired(3);
		b.whoAmI();

		std::cout << std::endl << "--- FINAL STATUS OF " << b.getDname() << " ---" << std::endl;
		std::cout << "Hit points: " << b.getHitPoints() << std::endl;
		std::cout << "Energy points: " << b.getEnergyPoints() << std::endl;
		std::cout << "Attack damage: " << b.getAttackDamage() << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		DiamondTrap Blue_diamond("Blue_diamond");
		std::cout << std::endl;
		DiamondTrap Pink_diamons(Blue_diamond);
		std::cout << std::endl;

		Pink_diamons.beRepaired(10);
		Blue_diamond.beRepaired(5);
		
		std::cout << Pink_diamons.getDname() << " has " << Pink_diamons.getHitPoints() << " hit points" << std::endl;
		std::cout << Blue_diamond.getDname() << " has " << Blue_diamond.getHitPoints() << " hit points" << std::endl;
;
		Blue_diamond.whoAmI();
		Blue_diamond.guardGate();
		Blue_diamond.highFivesGuys();
	}

	return (0);
}