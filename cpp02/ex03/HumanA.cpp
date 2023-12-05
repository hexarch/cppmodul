/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:52:29 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 16:53:23 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name),weapon(_weapon){}

HumanA::~HumanA(){}

void    HumanA::attack()
{
    std::cout <<this->name << " attacks with their " << this ->weapon.getType() << std::endl;
}