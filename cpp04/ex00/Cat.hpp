/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:43:02 by alcelik           #+#    #+#             */
/*   Updated: 2023/11/06 11:05:23 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& copy);
        ~Cat();
        void makeSound() const;
};

#endif
