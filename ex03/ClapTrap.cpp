#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap(void) : name("default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called with atributes" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}

//Destructors
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

//Overload Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    if(this != &other)
    {
        name = other.name;
        HitPoints = other.HitPoints;
        EnergyPoints = other.EnergyPoints;
        AttackDamage = other.AttackDamage;
    }
    return (*this);
}

/*bool ClapTrap::operator==(const ClapTrap &other) const
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
}*/

//Public Methods
void ClapTrap::attack(const std::string &target)
{
    if(EnergyPoints == 0 || HitPoints == 0)
    {
        std::cout << "Claptrap " << name << " doesn't have enough energy or hit points to attack!" << std::endl;
        return;
    }
    std::cout << "Claptrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints > amount)
		HitPoints -= amount;
	else if (HitPoints > 0)
		HitPoints = 0;
	else
	{
		std::cout << "ClapTrap " << name << " is already dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hit points, it now has " << HitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints == 0)
    {
        std::cout << "Claptrap " << name << " doesn't have enough energy to repair itself!" << std::endl;
        return;
    }
    HitPoints += amount;
    EnergyPoints--;
    std::cout << "Claptrap " << name << " repairs itself with " << amount << " points" << std::endl;
}

//Getters
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

//Setters
/*void ClapTrap::setHitPoints(unsigned int HitPoints)
{
    this->HitPoints = HitPoints;
}
void ClapTrap::setEnergyPoints(unsigned int EnergyPoints)
{
     this->EnergyPoints = EnergyPoints;
}
void ClapTrap::setAttackDamage(unsigned int AttackDamage)
{
     this->AttackDamage = AttackDamage;
}
void ClapTrap::setName(std::string name)
{
     this->name = name;
}*/