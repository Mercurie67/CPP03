#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Little Clap");
	
	std::cout << std::endl << "--- INITIAL STATUS OF " << a.get_name() << " ---" << std::endl;
	std::cout << "Hit points: " << a.get_hitPoints() << std::endl;
	std::cout << "Energy points: " << a.get_energyPoints() << std::endl;
	std::cout << "Attack damage: " << a.get_attackDamage() << std::endl << std::endl;

	a.attack("Other Clap");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Other Clap");
	b.beRepaired(3);
	for (int i = 0; i < 10; i++)
		b.attack("Big Clap");
	b.beRepaired(3);

	std::cout << std::endl << "--- FINAL STATUS OF " << a.get_name() << " ---" << std::endl;
	std::cout << "Hit points: " << a.get_hitPoints() << std::endl;
	std::cout << "Energy points: " << a.get_energyPoints() << std::endl;
	std::cout << "Attack damage: " << a.get_attackDamage() << std::endl;
	
	return 0;
}