#include "DiamondTrap.hpp"

//Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name")
{
    this->name = "default";
    ClapTrap::name = "default_clap_name";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap Default constructor called with atributes" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    this->name = other.name;
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}
// Destructors
DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

// Overload Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Assignment operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->ClapTrap::name = other.ClapTrap::name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return (*this);
}

// Public Methods
void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->name << std::endl;
    std::cout << "My Claptrap name is " << this->ClapTrap::name << std::endl;
}
// Getters
std::string DiamondTrap::getDName(void) const
{
     return(name);
}

// Setters



