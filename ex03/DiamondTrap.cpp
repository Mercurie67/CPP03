#include "DiamondTrap.hpp"

//Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name")
{
    this->_name = "default";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
    this->_name = _name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap Default constructor called with atributes" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    this->_name = other._name;
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
        this->_name = other._name;
        this->ClapTrap::_name = other.ClapTrap::_name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

// Public Methods
void DiamondTrap::whoAmI(void)
{
    std::cout << "My _name is " << this->_name << std::endl;
    std::cout << "My Claptrap _name is " << this->ClapTrap::_name << std::endl;
}
// Getters
std::string DiamondTrap::getD_name(void) const
{
     return(_name);
}

// Setters



