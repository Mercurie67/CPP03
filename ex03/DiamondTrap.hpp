#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
    //Constructors
        DiamondTrap(void);
        DiamondTrap(std::string _name);
        DiamondTrap(const DiamondTrap& other);

    //Destructors
        ~DiamondTrap();

    //Overload Operators
        DiamondTrap &operator=(const DiamondTrap &other);
    
    //Public Methods
        void whoAmI(void);
    //Setters

    //Getters
        std::string getD_name(void) const;
        
};

#endif

