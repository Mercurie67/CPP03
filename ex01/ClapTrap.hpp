#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
    //Constructors
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);

    //Destructors
        virtual ~ClapTrap();

    //Overload Operators
        ClapTrap &operator=(const ClapTrap &other);
        bool operator==(const ClapTrap &other) const;
        bool operator!=(const ClapTrap &other) const;

    //Public Methods
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    //Getters
        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;

    //Setters
    //    void setHitPoints(unsigned int HitPoints) ;
    //    void setEnergyPoints(unsigned int EnergyPoints);
    //    void setAttackDamage(unsigned int AttackDamage);
    //    void setName(std::string name);
};

#endif

