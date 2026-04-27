#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
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
        virtual ~ClapTrap();

    //Overload Operators
        ClapTrap &operator=(const ClapTrap &other);

    //Public Methods
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    //Getters
        std::string get_name(void) const;
        unsigned int get_hitPoints(void) const;
        unsigned int get_energyPoints(void) const;
        unsigned int get_attackDamage(void) const;

    //Setters
    //    void set_hitPoints(unsigned int _hitPoints) ;
    //    void set_energyPoints(unsigned int _energyPoints);
    //    void set_attackDamage(unsigned int _attackDamage);
    //    void set_name(std::string _name);
};

#endif

