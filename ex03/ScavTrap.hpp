/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:21:23 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:48:44 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

