/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:19:54 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 18:01:57 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie x("Foo");
	Zombie *z;
	x.announce();
	z = newZombie("Zoo");
	z->announce();
	delete (z);
	randomChump("Random Zomb");
}
