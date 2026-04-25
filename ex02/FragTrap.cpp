#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void) : ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Default constructor called with atributes" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

// Destructors
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

// Overload Operators
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Assignment operator called" << std::endl;
    if(*this != other)
    {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return (*this);
}

// Public Methods

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << ": Do you want a high five?\n\t*CLAP*\tThere you go." << std::endl;
}

// Getters

// Setters



