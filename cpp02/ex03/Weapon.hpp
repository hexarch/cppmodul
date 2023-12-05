/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:19:53 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 14:21:38 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
        private:
            std::string type;

        public:
            Weapon(std::string type);
            ~Weapon(void);
            const std::string &getType();
            void    setType(std::string type);
};
#endif