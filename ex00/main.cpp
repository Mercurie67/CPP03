/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:18:43 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:57:49 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap b;
	ClapTrap a("Little Clap");
	
	std::cout << std::endl << "--- INITIAL STATUS OF " << a.getName() << " ---" << std::endl;
	std::cout << "Hit points: " << a.getHitPoints() << std::endl;
	std::cout << "Energy points: " << a.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;

	a.attack("Other Clap");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Other Clap");
	b.beRepaired(3);
	for (int i = 0; i < 10; i++)
		b.attack("Big Clap");
	b.beRepaired(3);

	std::cout << std::endl << "--- FINAL STATUS OF " << a.getName() << " ---" << std::endl;
	std::cout << "Hit points: " << a.getHitPoints() << std::endl;
	std::cout << "Energy points: " << a.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << a.getAttackDamage() << std::endl;
	
	return 0;
}