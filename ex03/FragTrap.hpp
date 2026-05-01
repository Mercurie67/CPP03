/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:21:00 by medel-ca          #+#    #+#             */
/*   Updated: 2026/05/01 15:48:09 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
    //Constructors
        FragTrap(void);
        FragTrap(std::string name);
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

