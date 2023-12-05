/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:22 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:24:04 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}

/*				Orthodox Canonical Form					*/

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()	{}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap (const ScavTrap &src): ClapTrap(src)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	std::cout << "ScavTrap\'s Copy assignment operator called" << std::endl;
	return (*this);
}

/*					Stream	Functions				*/

std::ostream&	operator<<(std::ostream &stream, ScavTrap &ScavTrap)
{
	stream << " Name: " << ScavTrap.getName() << std::endl << " Hitpoints: " << ScavTrap.getHitPoints() << std::endl << \
	" Energy Points: " << ScavTrap.getEnergyPoint() << std::endl << " Attack Damage: " << ScavTrap.getAttackDamage() << std::endl;
	return (stream);
}