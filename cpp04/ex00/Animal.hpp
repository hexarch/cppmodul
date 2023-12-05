/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:42:53 by alcelik           #+#    #+#             */
/*   Updated: 2023/11/06 12:21:45 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal &operator=(const Animal& copy); //kopya atama işleci, bir hayvan nesnesini başka bir hayvan nesnesine kopyalar.
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string);
};

#endif
