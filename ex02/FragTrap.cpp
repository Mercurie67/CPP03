#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
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
    if(this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

// Public Methods

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << ": Do you want a high five?\n\t*CLAP*\tThere you go." << std::endl;
}

// Getters

// Setters



