/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:31:02 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 16:26:47 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("Lancelot");
    ClapTrap p2("Selena");
    int gethp = 5;

    p1.setAttackDamage(8);
    p2.setAttackDamage(15);

    std::cout << std::endl << p1 << std::endl << p2 << std::endl;

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());
    std::cout << std::endl << p1 << std::endl << p2 << std::endl;
    p2.beRepaired(gethp);
    std::cout << std::endl << p1 << std::endl << p2 << std::endl;
    p2.attack(p1.getName());
    p1.takeDamage(p2.getAttackDamage());
    p1.beRepaired(gethp);
    std::cout << std::endl << p1 << std::endl << p2 << std::endl;
    return (0);
}