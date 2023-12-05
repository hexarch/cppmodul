/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:18:09 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 16:53:55 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : name(_name),weapon(NULL){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void    HumanB::attack(){
    std::cout <<this->name << " attacks with their " << this ->weapon->getType() << std::endl;
}
