/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:44:53 by alcelik          #+#    #+#             */
/*   Updated: 2023/11/06 11:08:14 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    type = "Animal";
    std::cout << "Animal constructor called\n";
}

AAnimal::AAnimal(std::string type): type(type) {
    std::cout << "Animal constructor called\n";
}

AAnimal::AAnimal(const AAnimal& copy) {
    *this = copy;
    std::cout << "Animal copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal& copy) {
    this->type = copy.type;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called\n";
}

std::string AAnimal::getType() const {
    return (type);
}

void AAnimal::setType(std::string type) {
    this->type = type;
}

void AAnimal::makeSound() const {
    std::cout << "regular animal sound\n";
}