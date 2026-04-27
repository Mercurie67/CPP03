#include "DiamondTrap.hpp"

int main()
{
	{
		DiamondTrap b("Little Diamond");

		std::cout << "\n### TESTING DIAMONDTRAP ###" << std::endl;	
		std::cout << std::endl << "--- INITIAL STATUS OF " << b.getD_name() << " ---" << std::endl;
		std::cout << "Hit points: " << b.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << b.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << b.get_attackDamage() << std::endl << std::endl;

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

		std::cout << std::endl << "--- FINAL STATUS OF " << b.getD_name() << " ---" << std::endl;
		std::cout << "Hit points: " << b.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << b.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << b.get_attackDamage() << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		DiamondTrap Blue_diamond("Blue_diamond");
		std::cout << std::endl;
		DiamondTrap Pink_diamons(Blue_diamond);
		std::cout << std::endl;

		Pink_diamons.beRepaired(10);
		Blue_diamond.beRepaired(5);
		
		std::cout << Pink_diamons.getD_name() << " has " << Pink_diamons.get_hitPoints() << " hit points" << std::endl;
		std::cout << Blue_diamond.getD_name() << " has " << Blue_diamond.get_hitPoints() << " hit points" << std::endl;
;
		Blue_diamond.whoAmI();
		Blue_diamond.guardGate();
		Blue_diamond.highFivesGuys();
	}

	return (0);
}