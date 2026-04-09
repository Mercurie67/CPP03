#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "Default constructor called with atributes" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    name = other.name;
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    AttackDamage = other.AttackDamage;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if(*this != other)
        *this = other;
    return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

bool ClapTrap::operator==(const ClapTrap &other) const
{
    if(this->name == other.name && this->HitPoints == other.HitPoints 
        && this->EnergyPoints == other.EnergyPoints && this->AttackDamage == other.AttackDamage)
        return true;
    else   
        return false;
}

bool ClapTrap::operator!=(const ClapTrap &other) const
{
    return !(*this == other);
}

void ClapTrap::attack(const std::string &target)
{
    if(EnergyPoints == 0 || HitPoints == 0)
    {
        std::cout << name << " doesn't have enough energy or hit points to attack!" << std::endl;
        return;
    }
    std::cout << name << " attacks " << target << " causing " << HitPoints << " points of damage" << std::endl;
    EnergyPoints--;
    HitPoints = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " takes " << amount << " points of damage" << std::endl;
    AttackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints == 0)
    {
        std::cout << name << " doesn't have enough energy to repair itself!" << std::endl;
        return;
    }
    HitPoints += amount;
    EnergyPoints--;
    std::cout << name << " repairs itself with " << amount << " points" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return(name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return (HitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return (EnergyPoints);
}
unsigned int ClapTrap::getAttackDamage(void) const
{
    return (AttackDamage);
}
