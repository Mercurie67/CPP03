/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:20:53 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/02 13:30:46 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);

    //Destructors
        ~DiamondTrap();

    //Overload Operators
        DiamondTrap &operator=(const DiamondTrap &other);
    
    //Public Methods
        void whoAmI(void);

    //Getters
        std::string getDname(void) const;
    //Setters      
};

#endif

