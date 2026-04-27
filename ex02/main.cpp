#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		FragTrap f;
		FragTrap e("Little Frag");

		std::cout << std::endl << "--- INITIAL STATUS OF " << e.get_name() << " ---" << std::endl;
		std::cout << "Hit points: " << e.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << e.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << e.get_attackDamage() << std::endl << std::endl;

		e.highFivesGuys();
		e.attack("other Frag");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("other Frag");

		std::cout << std::endl << "--- FINAL STATUS OF " << e.get_name() << " ---" << std::endl;
		std::cout << "Hit points: " << e.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << e.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << e.get_attackDamage() << std::endl;
	}
	return (0);
}