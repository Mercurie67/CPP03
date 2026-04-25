#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    Guarding = false;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    Guarding = false;
    std::cout << "ScavTrap Default constructor called with atributes" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    Guarding = false;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

//Operator Overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Assignment operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
        this->Guarding = other.Guarding;
    }
    return (*this);
}

//Public Methods
void ScavTrap::attack(const std::string &target)
{
    if(EnergyPoints == 0 || HitPoints == 0)
    {
        std::cout << "Scavtrap " << name << " doesn't have enough energy or hit points to attack!" << std::endl;
        return;
    }
    std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
    EnergyPoints--;
}

void ScavTrap::guardGate()
{
    if(Guarding == false)
    {
        Guarding = true;
        std::cout << "ScavTrap " << name << " is entering guardGate mode" << std::endl;
    }
    std::cout << "ScavTrap " << name << " is already in guardGate mode" << std::endl;
}

//Getter

bool ScavTrap::getGuarding()
{
    return Guarding;
}

//Setter


