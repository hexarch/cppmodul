/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:42:57 by alcelik           #+#    #+#             */
/*   Updated: 2023/11/06 11:05:16 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called\n";
    Animal::type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor called\n";
    *this = copy;
}

Cat &Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow meow\n";
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
}
