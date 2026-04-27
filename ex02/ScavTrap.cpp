#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    Guarding = false;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
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
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
        this->Guarding = other.Guarding;
    }
    return (*this);
}

//Public Methods
void ScavTrap::attack(const std::string &target)
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "Scavtrap " << _name << " doesn't have enough energy or hit points to attack!" << std::endl;
        return;
    }
    std::cout << "Scavtrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    if(Guarding == false)
    {
        Guarding = true;
        std::cout << "ScavTrap " << _name << " is entering guardGate mode" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " is already in guardGate mode" << std::endl;
}

//Getter

bool ScavTrap::getGuarding()
{
    return Guarding;
}

//Setter


