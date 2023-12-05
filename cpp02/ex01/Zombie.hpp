/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:43:04 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 17:26:10 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:
        void announce(void);
        void set_name(std::string _name);

            ~Zombie(void);
        private:
            std::string name_;
};

Zombie* zombieHorde(int N, std::string name);

#endif