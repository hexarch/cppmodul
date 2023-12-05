/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:57:18 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 16:58:19 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->type = _type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}
const std::string &Weapon::getType()
{
    return (this->type);
}