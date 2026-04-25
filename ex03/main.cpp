#include "DiamondTrap.hpp"

int main()
{
	{
	std::cout << "### TESTING DIAMONDTRAP ###\n" << std::endl;
	DiamondTrap b("Little Diamond");
	
	std::cout << std::endl << "--- INITIAL STATUS OF " << b.getDName() << " ---" << std::endl;
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

	std::cout << std::endl << "--- FINAL STATUS OF " << b.getDName() << " ---" << std::endl;
	std::cout << "Hit points: " << b.getHitPoints() << std::endl;
	std::cout << "Energy points: " << b.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << b.getAttackDamage() << std::endl;
	b.whoAmI();
	}
	{
		std::cout << std::endl;
		FragTrap Zaku("Zaku");
		std::cout << std::endl;
		DiamondTrap Red_comet("Red_comet");
		std::cout << std::endl;
		DiamondTrap Gouf(Red_comet);
		std::cout << std::endl;

		Gouf.beRepaired(10);
		Red_comet.beRepaired(10);
		Zaku.beRepaired(10);
		Zaku.attack("Red_comet");
		if (Zaku.getHitPoints() > 0)
			Red_comet.takeDamage(Zaku.getAttackDamage());
		std::cout << Red_comet.getHitPoints() << std::endl;
		std::cout << Red_comet.getAttackDamage() << std::endl;
		std::cout << Red_comet.getEnergyPoints() << std::endl;
		Red_comet.whoAmI();
		Red_comet.attack("Zaku");
		if (Red_comet.getHitPoints() > 0)
			Zaku.takeDamage(Red_comet.getAttackDamage());
		Red_comet.guardGate();
		Red_comet.highFivesGuys();
		Zaku.beRepaired(10);
		Red_comet.beRepaired(10);
	}

	return (0);
}