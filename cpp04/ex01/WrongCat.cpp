/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:44:41 by alcelik          #+#    #+#             */
/*   Updated: 2023/11/06 11:07:56 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called\n";
    WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "WrongCat copy constructor called\n";
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& copy) {
    WrongAnimal::type = copy.type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "meow meow\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}
