/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:05 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:40:43 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*				Functions				*/

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << " High Five Guys called " << std::endl;
}

/*				Orthodox Canonical Form					*/

FragTrap::FragTrap():ClapTrap(){}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap (const FragTrap &src): ClapTrap(src)
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	std::cout << "FragTrap\'s Copy assignment operator called" << std::endl;
	return (*this);
}

/*					Stream	Functions				*/

std::ostream&	operator<<(std::ostream &stream, FragTrap &FragTrap)
{
	stream << " Name: " << FragTrap.getName() << std::endl << " Hitpoints: " << FragTrap.getHitPoints() << std::endl << \
	" Energy Points: " << FragTrap.getEnergyPoint() << std::endl << " Attack Damage: " << FragTrap.getAttackDamage() << std::endl;
	return (stream);
}
