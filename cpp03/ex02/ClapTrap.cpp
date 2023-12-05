/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:10 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:40:29 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*				Functions				*/

void ClapTrap::attack(const std::string& target)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target
        << " causing " << this->attackDamage << " points of damage! " << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " takes "
        << amount << " points of damage! " << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints <= 0)
            std::cout << "\033[1;91mdead...\033[0m" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " get health "
        << amount << " points " << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
}

/*				Setter && Getter			*/

void ClapTrap::setName(const std::string &name)
{
    this->name = name;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

void ClapTrap::setHitPoints(int hitpoints)
{
    this->hitPoints = hitpoints;
}

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

void ClapTrap::setAttackDamage(int attack)
{
    this->attackDamage = attack;
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
    this->energyPoints = energyPoint;
}

int ClapTrap::getEnergyPoint()
{
    return (this->energyPoints);
}


/*				Orthodox Canonical Form					*/


ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const std::string &name):name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src):name(src.name), hitPoints(src.hitPoints), energyPoints(src.energyPoints), attackDamage(src.attackDamage)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src)
	{
        this->name = src.name;
        this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
	return (*this);
}

/*					Stream Function				*/

std::ostream&	operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << " Name: " << clapTrap.getName() << std::endl << " Hitpoints: " << clapTrap.getHitPoints() << std::endl << \
	" Energy Points: " << clapTrap.getEnergyPoint() << std::endl << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
	return (stream);
}