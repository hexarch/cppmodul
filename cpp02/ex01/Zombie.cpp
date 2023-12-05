/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:45:56 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 12:47:12 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "<" << name_ << ">"  << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string _name)
{
    name_ = _name;
}

Zombie::~Zombie(void)
{
    std::cout << "<" << name_ << ">" << "is dead." << std::endl;
}