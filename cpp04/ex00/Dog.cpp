/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:43:06 by alcelik           #+#    #+#             */
/*   Updated: 2023/11/06 11:05:40 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    Animal::type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    Animal::type = copy.type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "woof woof\n";
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
}
