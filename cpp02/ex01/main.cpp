/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:44:41 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 17:27:17 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int count = 3;

    horde = zombieHorde(count, "monster");
    for(int i = 0; i< count; i++)
    {
        horde->announce();
    }
    delete[] horde;
    return (0);
}