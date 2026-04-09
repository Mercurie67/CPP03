#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Maria");

	std::cout << "--- INITIAL STATUS OF " << clap1.getName() << " ---" << std::endl;
	std::cout << "Hit points: " << clap1.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clap1.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clap1.getAttackDamage() << std::endl << std::endl;


	clap1.attack("Pepe");
	clap1.takeDamage(3);
	clap1.beRepaired(3);

	std::cout << std::endl << "--- FINAL STATUS OF " << clap1.getName() << " ---" << std::endl;
	std::cout << "Hit points: " << clap1.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clap1.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clap1.getAttackDamage() << std::endl;

}