/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:02:37 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 16:37:40 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if((this->hitPoints != 0 || this -> energyPoints != 0)&& (this->hitPoints > 0 && this-> energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " attacks " <<target
        << " causing " << this->attackDamage << " point of damage! " << std::endl;
        this->energyPoints--;
    }
     else if (this->hitPoints <= 0)
         std::cout << this->name << "No repair because no nergy points..." <<std::endl;
    else
         std::cout << this->name << "No damge because dead..." <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if((this->hitPoints != 0 || this->energyPoints != 0)&& (this->hitPoints > 0 && this->energyPoints >0))
   {
    std::cout << "Claptrap " << this->name << " takes"
    << amount << " points of damage! " << std::endl;
    this->hitPoints -= amount;
    if(this->hitPoints < 0)
         std::cout << this->name << " \033[1;91mdead...\033[0m" << std::endl;
    } 
    else if (this->hitPoints <= 0)
         std::cout << this->name << "No repair because no nergy points..." <<std::endl;
    else
         std::cout << this->name << "No damge because dead..." <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name <<" get health "
        << amount << " points " << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
    else if (this->hitPoints <= 0)
        std::cout << this->name << "No repair because no nergy points..." <<std::endl;
    else
         std::cout << this->name << "No repair because no dead points..." <<std::endl;
}

void ClapTrap::setName(const std::string &name)
{
    this->name = name;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
}

int ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const std::string &name):name(name),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << "ClapTrap constructor " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src):name(src.name),hitPoints(src.hitPoints),energyPoints(src.energyPoints),attackDamage(src.attackDamage)
{
    std::cout << "ClapTrap copy constructor " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor " << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignment operator " << std::endl;
    if(this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
            this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return(*this);
}
std::ostream& operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
    stream << " Name: " << clapTrap.getName()<< std::endl << " Hit Points: " << clapTrap.getHitPoints() << std::endl << \
    " Energy Points: " << clapTrap.getEnergyPoints()<< std::endl << " Attack Dame: " << clapTrap.getAttackDamage() << std::endl;
    return (stream);
}