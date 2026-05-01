/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:20:09 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:45:45 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        ClapTrap(std::string name);
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
        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;

    //Setters
    //    void set_hitPoints(unsigned int _hitPoints) ;
    //    void set_energyPoints(unsigned int _energyPoints);
    //    void set_attackDamage(unsigned int _attackDamage);
    //    void set_name(std::string _name);
};

#endif

