#include "ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	ClapTrap a;
	ClapTrap b("Little Clap");
	
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

	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
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
		d.attack("Big Scav");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("Bigger Scav");
	}
	return (0);
}