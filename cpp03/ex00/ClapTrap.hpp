/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:29 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 14:23:54 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
class ClapTrap
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        void    attack(const std::string &);
        void   takeDamage(unsigned int);
        void   beRepaired(unsigned int);
        ClapTrap();
        ClapTrap(const std::string &);
        ClapTrap(const ClapTrap &);
        ~ClapTrap();
        ClapTrap &operator = (const ClapTrap &);

        void    setName (const std::string &);
        std::string getName();
        void    setHitPoints (int);
        int    getHitPoints();
        void   setAttackDamage (int);
        int    getAttackDamage();
        void   setEnergyPoints (int);
        int    getEnergyPoints();
};

std::ostream    &operator << (std::ostream &, ClapTrap &);

#endif