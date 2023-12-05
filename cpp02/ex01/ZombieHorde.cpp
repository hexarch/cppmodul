/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:47:17 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 18:39:33 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie *zombie_horde = new Zombie[N]; //n kadar yer açtık

    for (int i=0; i <N; i++)
    {
        zombie_horde[i].set_name(name); //her birine isim atadık
    }
    return (zombie_horde);
}