/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:45:23 by alcelik           #+#    #+#             */
/*   Updated: 2023/11/06 11:08:47 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    AAnimal::type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    AAnimal::type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "woof woof\n";
}

Brain *Dog::getBrain() const {
    return this->brain;
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
    delete brain;
}
