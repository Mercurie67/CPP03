#include "ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING SCAVTRAP ###\n" << std::endl;
	{
		ScavTrap c;
		ScavTrap d("Little Scav");

		std::cout << std::endl << "--- INITIAL STATUS OF " << c.get_name() << " ---" << std::endl;
		std::cout << "Hit points: " << c.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << c.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << c.get_attackDamage() << std::endl;
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

		std::cout << std::endl << "--- FINAL STATUS OF " << c.get_name() << " ---" << std::endl;
		std::cout << "Hit points: " << c.get_hitPoints() << std::endl;
		std::cout << "Energy points: " << c.get_energyPoints() << std::endl;
		std::cout << "Attack damage: " << c.get_attackDamage() << std::endl;
		std::cout << "¿Guarding gate? " << std::boolalpha << c.getGuarding() << std::endl << std::endl;
	}
	return (0);
}