#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called with atributes" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
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
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return (*this);
}

//Public Methods
void ClapTrap::attack(const std::string &target)
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "Claptrap " << _name << " doesn't have enough energy or hit points to attack!" << std::endl;
        return;
    }
    std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > amount)
		_hitPoints -= amount;
	else if (_hitPoints > 0)
		_hitPoints = 0;
	else
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " was attacked and lost " << amount << " hit points, it now has " << _hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints == 0)
    {
        std::cout << "Claptrap " << _name << " doesn't have enough energy to repair itself!" << std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "Claptrap " << _name << " repairs itself with " << amount << " points" << std::endl;
}

//Getters
std::string ClapTrap::get_name(void) const
{
    return(_name);
}

unsigned int ClapTrap::get_hitPoints(void) const
{
    return (_hitPoints);
}

unsigned int ClapTrap::get_energyPoints(void) const
{
    return (_energyPoints);
}
unsigned int ClapTrap::get_attackDamage(void) const
{
    return (_attackDamage);
}

//Setters
/*void ClapTrap::set_hitPoints(unsigned int _hitPoints)
{
    this->_hitPoints = _hitPoints;
}
void ClapTrap::set_energyPoints(unsigned int _energyPoints)
{
     this->_energyPoints = _energyPoints;
}
void ClapTrap::set_attackDamage(unsigned int _attackDamage)
{
     this->_attackDamage = _attackDamage;
}
void ClapTrap::set_name(std::string _name)
{
     this->_name = _name;
}*/