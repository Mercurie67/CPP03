/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:19:59 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:44:31 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool _guarding;
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

