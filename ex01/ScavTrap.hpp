#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool Guarding;
    public:

    //Constructors
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);

    //Destructors
        virtual ~ScavTrap();

    //Overload Operators
        ScavTrap &operator=(const ScavTrap &other);
    
    //Public Methods    
        void attack(const std::string &target);
        void guardGate();

    //Getters
        bool getGuarding();

    //Setters

};

#endif

