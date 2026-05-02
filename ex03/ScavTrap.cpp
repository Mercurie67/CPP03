/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:21:19 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/02 13:29:56 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _guarding = false;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _guarding = false;
    std::cout << "ScavTrap Default constructor called with atributes" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    _guarding = false;
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
        this->_guarding = other._guarding;
    }
    return (*this);
}

//Public Methods
void ScavTrap::attack(const std::string &target)
{
    if(_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " doesn't have enough Energy to attack!" << std::endl;
        return;
    }
    else if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " doesn't have enough Hit Points to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    if(_guarding == false)
    {
        _guarding = true;
        std::cout << "ScavTrap " << _name << " is entering guardGate mode" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " is already in guardGate mode" << std::endl;
}

//Getter

bool ScavTrap::getGuarding()
{
    return _guarding;
}

//Setter


