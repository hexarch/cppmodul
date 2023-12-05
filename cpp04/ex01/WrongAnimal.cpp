/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:44:33 by alcelik          #+#    #+#             */
/*   Updated: 2023/11/06 11:07:46 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    *this = copy;
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy) {
    this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const {
    return (type);
}

void WrongAnimal::setType(std::string type) {
    this->type = type;
}

void WrongAnimal::makeSound() const {
    std::cout << "regular WrongAnimal sound\n";
}
