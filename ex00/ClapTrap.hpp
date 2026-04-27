#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
    //Constructors
        ClapTrap(void);
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap& other);
    
    //Destructors
        ~ClapTrap();

    //Overload operators
        ClapTrap &operator=(const ClapTrap &other);

    //Public Methods
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    //Getter
        std::string get_name(void) const;
        unsigned int get_hitPoints(void) const;
        unsigned int get_energyPoints(void) const;
        unsigned int get_attackDamage(void) const;

    //Seter
};

#endif

