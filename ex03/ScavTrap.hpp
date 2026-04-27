#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        bool _guarding;
    public:

    //Constructors
        ScavTrap(void);
        ScavTrap(std::string _name);
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

