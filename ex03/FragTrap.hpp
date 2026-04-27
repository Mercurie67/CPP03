#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
    //Constructors
        FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(const FragTrap& other);

    //Destructors
        virtual ~FragTrap();

    //Overload Operators
        FragTrap &operator=(const FragTrap &other);
    
    //Public Methods
    void highFivesGuys(void);

    //Setters

    //Getters
        
};

#endif

