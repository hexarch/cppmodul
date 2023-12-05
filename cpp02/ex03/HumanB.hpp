/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:18:09 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 16:55:14 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
        private:
            std::string name;
            Weapon  *weapon;

        public:
            HumanB(std::string name);
            ~HumanB();
            void attack();
            void setWeapon(Weapon &weapon);
};
#endif